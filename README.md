# ROS Visualization Markers

**About**

Displaying simple markers and a mesh through ROS Vizualization (rviz).

**Demo**

https://user-images.githubusercontent.com/98209046/171084643-cc2649e2-924f-450f-81ad-f5579f84c5b7.mp4

**Installation**

1\. If you don't already have a ROS environment, [set up a ROS environment](http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment).

2\. [Set up rviz](http://wiki.ros.org/rviz/UserGuide). The first three steps are enough to get started.

3\. Follow this [tutorial](http://wiki.ros.org/rviz/Tutorials/Markers%3A%20Basic%20Shapes), but use `markers.cpp` and `CMakeLists.txt` from this repository instead of `basic_shapes.cpp` and the edited `CMakeLists.txt` from the tutorial. Don't forget to change `Fixed Frame` to `my_frame` and add a `Marker` display. Follow the demo video and use the tutorial for reference.
