cd /media/student/data5/cvbridge_build_ws
catkin build

----------------7/16 convert to multi-repo with submodule ---
 git submodule add  https://github.com/catkin/catkin_simple.git ./src/catkin_simple/

 git submodule update
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
