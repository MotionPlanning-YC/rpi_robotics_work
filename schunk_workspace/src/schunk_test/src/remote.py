#!/usr/bin/python

'''
remote.py - This program asks the user to input a series of target joint angles
to the Powerball.  The Powerball will then generate a trajectory and move to 
the appropriate task destination.

Bryant Pong
RPI CS Robotics Lab
10/1/14

Last Updated: 10/7/14 - 2:33 PM
'''     

# Standard Python Libraries:
import time
import os
import sys
import types
import thread
import commands
import math

# ROS-Specific Libraries: 
import roslib
roslib.load_manifest('cob_script_server')
import rospy
import actionlib

import simple_script_server

# Message Libraries:
from trajectory_msgs.msg import *
from geometry_msgs.msg import *
from move_base_msgs.msg import *
from tf.transformations import *
from std_msgs.msg import String, ColorRGBA
from control_msgs.msg import *

# Libraries from Fraunhofer's Care-o-bot:
from cob_sound.msg import *
from cob_script_server.msg import *
from cob_srvs.srv import *



def powerball_remote():

	ah = simple_script_server.action_handle("move", "arm", "home", False, False)
	if False:
		return ah
	else: 
		ah.set_active()
	
	# Ask the user to input the desired joint angles:    
	print("Joint 1 is the proximal joint (the base), Joint 6 is the distal joint (the wrist)")
	joint1 = float(input("Please enter the desired angle for Joint 1: "))
	joint2 = float(input("Please enter the desired angle for Joint 2: "))
	joint3 = float(input("Please enter the desired angle for Joint 3: "))
	joint4 = float(input("Please enter the desired angle for Joint 4: "))
	joint5 = float(input("Please enter the desired angle for Joint 5: "))
	joint6 = float(input("Please enter the desired angle for Joint 6: "))

	# This list holds the joint angles:
	jointAngles = [joint1, joint2, joint3, joint4, joint5, joint6]

	# Encapsulate the jointAngles in another list (the trajectory):
	traj = [jointAngles]

	# Generate the trajectory message to send:
	traj_msg = JointTrajectory()
	traj_msg.header.stamp = rospy.Time.now() + rospy.Duration(0.5)		
	traj_msg.joint_names = ['arm_1_joint', 'arm_2_joint', 'arm_3_joint', 'arm_4_joint', 'arm_5_joint', 'arm_6_joint']
	point_nr = 0

	for point in traj:
		point_nr += 1
		point_msg = JointTrajectoryPoint()
		point_msg.positions = point
		point_msg.velocities = [0] * 6
		point_msg.time_from_start = rospy.Duration(3 * point_nr)
		traj_msg.points.append(point_msg)

	# Send the message to the action server:
	action_server_name = '/arm_controller/follow_joint_trajectory'

	client = actionlib.SimpleActionClient(action_server_name, FollowJointTrajectoryAction)
	if not client.wait_for_server(rospy.Duration(5)):
		print("Action server not ready within timeout.  Aborting...")
		ah.set_failed(4)
		return ah
	else:
		print("Action server ready!")



	client_goal = FollowJointTrajectoryGoal()
	client_goal.trajectory = traj_msg
	client.send_goal(client_goal)
	ah.set_client(client)

	ah.wait_inside()
	return ah




if __name__ == '__main__':

	while True:
		try:
			# Attempt to initialize the remote node:
			rospy.init_node('powerball_remote_py') 
			powerball_remote()
		except rospy.ROSInterruptException:
			print("Error.  Powerball Remote Program aborted")


