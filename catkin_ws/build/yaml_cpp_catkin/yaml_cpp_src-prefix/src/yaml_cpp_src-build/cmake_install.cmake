# Install script for directory: /home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so.0.5.3"
      "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so.0.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so.0.5.3;/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so.0.5")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib" TYPE SHARED_LIBRARY FILES
    "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/libyaml-cpp0.5.so.0.5.3"
    "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/libyaml-cpp0.5.so.0.5"
    )
  foreach(file
      "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so.0.5.3"
      "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so.0.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib" TYPE SHARED_LIBRARY FILES "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/libyaml-cpp0.5.so")
  if(EXISTS "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/include/yaml-cpp/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/include/yaml-cpp" TYPE DIRECTORY FILES "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src/include/yaml-cpp/" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-config.cmake;/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-config-version.cmake")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp" TYPE FILE FILES
    "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/CMakeFiles/yaml-cpp0.5-config.cmake"
    "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/yaml-cpp0.5-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-targets.cmake"
         "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/CMakeFiles/Export/_home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-targets.cmake")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp" TYPE FILE FILES "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/CMakeFiles/Export/_home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-targets-release.cmake")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
file(INSTALL DESTINATION "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp" TYPE FILE FILES "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/CMakeFiles/Export/_home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/cmake/yaml-cpp/yaml-cpp0.5-targets-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/pkgconfig/yaml-cpp0.5.pc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/pkgconfig" TYPE FILE FILES "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/yaml-cpp0.5.pc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/test/cmake_install.cmake")
  include("/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/util/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/hzt/autsys-projects-amg/catkin_ws/build/yaml_cpp_catkin/yaml_cpp_src-prefix/src/yaml_cpp_src-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
