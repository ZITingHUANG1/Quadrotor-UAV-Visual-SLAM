#!/bin/sh

DESTDIR=/home/hzt/autsys-projects-amg/catkin_ws/build/nlopt/nlopt_install make install

cp -r /home/hzt/autsys-projects-amg/catkin_ws/build/nlopt/nlopt_install//home/hzt/autsys-projects-amg/catkin_ws/install/* /home/hzt/autsys-projects-amg/catkin_ws/devel/.private/nlopt/
