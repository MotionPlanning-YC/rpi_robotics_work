## *********************************************************
## 
## File autogenerated for the cob_teleop_cob4 package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

##**********************************************************
## Software License Agreement (BSD License)
##
##  Copyright (c) 2008, Willow Garage, Inc.
##  All rights reserved.
##
##  Redistribution and use in source and binary forms, with or without
##  modification, are permitted provided that the following conditions
##  are met:
##
##   * Redistributions of source code must retain the above copyright
##     notice, this list of conditions and the following disclaimer.
##   * Redistributions in binary form must reproduce the above
##     copyright notice, this list of conditions and the following
##     disclaimer in the documentation and/or other materials provided
##     with the distribution.
##   * Neither the name of the Willow Garage nor the names of its
##     contributors may be used to endorse or promote products derived
##     from this software without specific prior written permission.
##
##  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
##  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
##  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
##  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
##  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
##  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
##  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
##  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
##  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
##  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
##  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
##  POSSIBILITY OF SUCH DAMAGE.
##**********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 233, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'button_deadman', 'edit_method': '', 'default': 11, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'base_max_linear', 'edit_method': '', 'default': 0.5, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'base_max_angular', 'edit_method': '', 'default': 1.5, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'torso_max_angular', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'head_max_angular', 'edit_method': '', 'default': 0.3, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'sensor_ring_max_angular', 'edit_method': '', 'default': 0.1, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_joint_velocity_max', 'edit_method': '', 'default': 0.3, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_cartesian_max_linear', 'edit_method': '', 'default': 0.1, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_cartesian_max_angular', 'edit_method': '', 'default': 0.1, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'gripper_max_velocity', 'edit_method': '', 'default': 0.1, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'base_x', 'edit_method': '', 'default': 1, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'base_y', 'edit_method': '', 'default': 0, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'base_yaw', 'edit_method': '', 'default': 2, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_x', 'edit_method': '', 'default': 0, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_y', 'edit_method': '', 'default': 1, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_yaw', 'edit_method': '', 'default': 2, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_pitch_up', 'edit_method': '', 'default': 4, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_pitch_down', 'edit_method': '', 'default': 6, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_roll_right_and_ellbow', 'edit_method': '', 'default': 5, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_roll_left_and_ellbow', 'edit_method': '', 'default': 7, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_z_up', 'edit_method': '', 'default': 12, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_z_down', 'edit_method': '', 'default': 14, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'gripper_open', 'edit_method': '', 'default': 15, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'gripper_close', 'edit_method': '', 'default': 13, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_joint_up', 'edit_method': '', 'default': 4, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_joint_down', 'edit_method': '', 'default': 6, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_joint_left', 'edit_method': '', 'default': 7, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_joint_right', 'edit_method': '', 'default': 5, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_joint_12', 'edit_method': '', 'default': 15, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_joint_34', 'edit_method': '', 'default': 14, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_joint_56', 'edit_method': '', 'default': 13, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_joint_7_gripper', 'edit_method': '', 'default': 12, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'axis_runfactor', 'edit_method': '', 'default': 9, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'button_safety_override', 'edit_method': '', 'default': 9, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'button_init_recover', 'edit_method': '', 'default': 3, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'button_mode_switch', 'edit_method': '', 'default': 0, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'torso_roll', 'edit_method': '', 'default': 0, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'torso_pitch', 'edit_method': '', 'default': 1, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'torso_yaw_left', 'edit_method': '', 'default': 15, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'torso_yaw_right', 'edit_method': '', 'default': 13, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'sensorring_yaw_left', 'edit_method': '', 'default': 4, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'sensorring_yaw_right', 'edit_method': '', 'default': 6, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'head_roll', 'edit_method': '', 'default': 2, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'head_pitch', 'edit_method': '', 'default': 3, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'head_yaw_left', 'edit_method': '', 'default': 7, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'head_yaw_right', 'edit_method': '', 'default': 5, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'head_home', 'edit_method': '', 'default': 4, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_left_home', 'edit_method': '', 'default': 7, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'arm_right_home', 'edit_method': '', 'default': 5, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'torso_home', 'edit_method': '', 'default': 6, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'sensorring_home', 'edit_method': '', 'default': 12, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'gripper_left_home', 'edit_method': '', 'default': 15, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'gripper_right_home', 'edit_method': '', 'default': 13, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'base_home', 'edit_method': '', 'default': 14, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'home_time', 'edit_method': '', 'default': 5.0, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'stop_time', 'edit_method': '', 'default': 0.8, 'level': 0, 'min': -100.0, 'type': 'double'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'gripper_1', 'edit_method': '', 'default': 3, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'gripper_2', 'edit_method': '', 'default': 4, 'level': 0, 'min': -100, 'type': 'int'}, {'srcline': 262, 'description': 'Autogenerated parameter based on model.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'gripper_max_angular', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -100.0, 'type': 'double'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])    
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

