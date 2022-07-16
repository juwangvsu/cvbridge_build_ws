cd /media/student/data5/cvbridge_build_ws
catkin build

----------------7/16 convert to multi-repo with submodule ---
to convert this folder to multi-repo, need to remove all pkgs under src/
and readd them as submodule:

git submodule add  https://github.com/catkin/catkin_simple.git ./src/catkin_simple/
git submodule add https://github.com/juwangvsu/yolov5_ros.git src/yolov5_ros

git submodule add  https://gitlab.com/mit-acl/lab/acl-mapping.git src/acl-mapping
git submodule update
	it seems the multi-repo also know which version is used for each submodule.

when clone this depo:
	git clone https://github.com/juwangvsu/cvbridge_build_ws.git --recursive

	git submodule init 
	git sumbodule update 
	then make sure the submodule use the right branch and commit
	cd src/vision_opencv
		git checkout 33f59e5a0299ed8ce11adfdc4b9c6b6b731f84f1
		(otherwise there is an boost error and build fail)

issue and fix:
	cakin config fix python path to the actual one:
catkin config -DPYTHON_EXECUTABLE=/home/student/.pyenv/versions/miniconda3-latest/bin/python -DPYTHON_INCLUDE_DIR=/home/student/.pyenv/versions/miniconda3-latest/include/python3.7m -DPYTHON_LIBRARY=/home/student/.pyenv/versions/miniconda3-latest/lib/libpython3.7m.so


		faster build fail
		error:  error: ‘snapstack_msgs::Goal {aka struct snapstack_msgs::Goal_<std::allocator<void> >}’ has no member named ‘dyaw’
     quadGoal.dyaw = next_goal.dyaw;

		snapstack_msgs version problem
		fix: git checkout 3e1dee9616bd7e8a467bce5a66c947ebf13a79d8

		missing gurobi library:
			install gurobi, ~/Documents/gurobi9xx

		if don't need faster, then ignore this. yolov5_ros should be good

---------------- 7/15/22 -----------------
this workspace is configured to use python3 (miniconda )
to see the python env, 
	catkin config
	this will print out current setting for this workspace

currently cv_bridge is build. note this is different than the one in /opt/ros/... which is python2

yolov5_ros need this one build for python3.

also do 
   pip install empy
	to solve the errors when building detection_msgs package
	note without that, building detection_msgs fail with an error about em package, 
	which is really empy package. 

yolov5_ros runs ok now, but I might have change it to use cpu instead. 
possible reason is /usr/local/cuda is not mounted. tbc
