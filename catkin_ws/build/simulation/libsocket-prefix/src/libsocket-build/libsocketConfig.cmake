set(libsocket_INCLUDE_DIRS "/home/hzt/autsys-projects-amg/catkin_ws/build/simulation/libsocket-prefix/src/libsocket/headers")

set(libsocket_BINARY_DIR "/home/hzt/autsys-projects-amg/catkin_ws/build/simulation/libsocket-prefix/src/libsocket-build")

include(${libsocket_BINARY_DIR}/libsocketTargets.cmake)

set(libsocket_LIBRARIES socket++)
