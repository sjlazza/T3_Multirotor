execute_process(COMMAND "/home/odroid/catkin_ws/build/t3_ros/DynamixelSDK/ros/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/odroid/catkin_ws/build/t3_ros/DynamixelSDK/ros/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
