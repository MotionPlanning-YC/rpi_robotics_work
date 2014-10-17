# Install script for directory: /home/powerball/rpi_robotics_work/schunk_workspace/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/powerball/rpi_robotics_work/schunk_workspace/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/powerball/rpi_robotics_work/schunk_workspace/install/_setup_util.py")
FILE(INSTALL DESTINATION "/home/powerball/rpi_robotics_work/schunk_workspace/install" TYPE PROGRAM FILES "/home/powerball/rpi_robotics_work/schunk_workspace/build/catkin_generated/installspace/_setup_util.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/powerball/rpi_robotics_work/schunk_workspace/install/env.sh")
FILE(INSTALL DESTINATION "/home/powerball/rpi_robotics_work/schunk_workspace/install" TYPE PROGRAM FILES "/home/powerball/rpi_robotics_work/schunk_workspace/build/catkin_generated/installspace/env.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/powerball/rpi_robotics_work/schunk_workspace/install/setup.bash")
FILE(INSTALL DESTINATION "/home/powerball/rpi_robotics_work/schunk_workspace/install" TYPE FILE FILES "/home/powerball/rpi_robotics_work/schunk_workspace/build/catkin_generated/installspace/setup.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/powerball/rpi_robotics_work/schunk_workspace/install/setup.sh")
FILE(INSTALL DESTINATION "/home/powerball/rpi_robotics_work/schunk_workspace/install" TYPE FILE FILES "/home/powerball/rpi_robotics_work/schunk_workspace/build/catkin_generated/installspace/setup.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/powerball/rpi_robotics_work/schunk_workspace/install/setup.zsh")
FILE(INSTALL DESTINATION "/home/powerball/rpi_robotics_work/schunk_workspace/install" TYPE FILE FILES "/home/powerball/rpi_robotics_work/schunk_workspace/build/catkin_generated/installspace/setup.zsh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/powerball/rpi_robotics_work/schunk_workspace/install/.rosinstall")
FILE(INSTALL DESTINATION "/home/powerball/rpi_robotics_work/schunk_workspace/install" TYPE FILE FILES "/home/powerball/rpi_robotics_work/schunk_workspace/build/catkin_generated/installspace/.rosinstall")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/catkin/profile.d" TYPE FILE FILES "/opt/ros/hydro/share/catkin/cmake/env-hooks/05.catkin_make.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/catkin/profile.d" TYPE FILE FILES "/opt/ros/hydro/share/catkin/cmake/env-hooks/05.catkin_make_isolated.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/powerball/rpi_robotics_work/schunk_workspace/build/gtest/cmake_install.cmake")
  INCLUDE("/home/powerball/rpi_robotics_work/schunk_workspace/build/ipa_canopen/ipa_canopen/cmake_install.cmake")
  INCLUDE("/home/powerball/rpi_robotics_work/schunk_workspace/build/schunk_robots/schunk_lwa4p/cmake_install.cmake")
  INCLUDE("/home/powerball/rpi_robotics_work/schunk_workspace/build/schunk_robots/schunk_lwa4p_extended/cmake_install.cmake")
  INCLUDE("/home/powerball/rpi_robotics_work/schunk_workspace/build/schunk_robots/schunk_robots/cmake_install.cmake")
  INCLUDE("/home/powerball/rpi_robotics_work/schunk_workspace/build/ipa_canopen/ipa_canopen_core/cmake_install.cmake")
  INCLUDE("/home/powerball/rpi_robotics_work/schunk_workspace/build/schunk_test/cmake_install.cmake")
  INCLUDE("/home/powerball/rpi_robotics_work/schunk_workspace/build/mocap_optitrack/cmake_install.cmake")
  INCLUDE("/home/powerball/rpi_robotics_work/schunk_workspace/build/ipa_canopen/ipa_canopen_ros/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/powerball/rpi_robotics_work/schunk_workspace/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/powerball/rpi_robotics_work/schunk_workspace/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
