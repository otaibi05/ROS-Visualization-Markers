#include <ros/ros.h>
#include <visualization_msgs/Marker.h>

int main( int argc, char** argv )
{
  ros::init(argc, argv, "markers");
  ros::NodeHandle n;
  ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 1);

  while (ros::ok())
  {
    visualization_msgs::Marker markerCube;
    visualization_msgs::Marker markerSphere;
    visualization_msgs::Marker markerArrow;
    visualization_msgs::Marker markerMesh;

    markerCube.header.frame_id = "/my_frame";
    markerSphere.header.frame_id = "/my_frame";
    markerArrow.header.frame_id = "/my_frame";
    markerMesh.header.frame_id = "/my_frame";

    markerCube.header.stamp = ros::Time::now();
    markerSphere.header.stamp = ros::Time::now();
    markerArrow.header.stamp = ros::Time::now();
    markerMesh.header.stamp = ros::Time::now();

    markerCube.ns = "markers";
    markerSphere.ns = "markers";
    markerArrow.ns = "markers";
    markerMesh.ns = "markers";

    markerCube.id = 0;
    markerSphere.id = 1;
    markerArrow.id = 2;
    markerMesh.id = 3;

    markerCube.type = visualization_msgs::Marker::CUBE;
    markerSphere.type = visualization_msgs::Marker::SPHERE;
    markerArrow.type = visualization_msgs::Marker::ARROW;
    markerMesh.type = visualization_msgs::Marker::MESH_RESOURCE;
    markerMesh.mesh_resource = "https://raw.githubusercontent.com/PR2/pr2_common/melodic-devel/pr2_description/meshes/base_v0/base.dae";

    markerCube.action = visualization_msgs::Marker::ADD;
    markerSphere.action = visualization_msgs::Marker::ADD;
    markerArrow.action = visualization_msgs::Marker::ADD;
    markerMesh.action = visualization_msgs::Marker::ADD;

    markerCube.pose.position.x = 0;
    markerCube.pose.position.y = 0;
    markerCube.pose.position.z = 0;
    markerCube.pose.orientation.x = 0.0;
    markerCube.pose.orientation.y = 0.0;
    markerCube.pose.orientation.z = 0.0;
    markerCube.pose.orientation.w = 1.0;

    markerSphere.pose.position.x = -2;
    markerSphere.pose.position.y = 0;
    markerSphere.pose.position.z = 0;
    markerSphere.pose.orientation.x = 0.0;
    markerSphere.pose.orientation.y = 0.0;
    markerSphere.pose.orientation.z = 0.0;
    markerSphere.pose.orientation.w = 1.0;

    markerArrow.pose.position.x = 2;
    markerArrow.pose.position.y = 0;
    markerArrow.pose.position.z = 0;
    markerArrow.pose.orientation.x = 0.0;
    markerArrow.pose.orientation.y = 0.0;
    markerArrow.pose.orientation.z = 0.0;
    markerArrow.pose.orientation.w = 1.0;

    markerMesh.pose.position.x = -4;
    markerMesh.pose.position.y = 0;
    markerMesh.pose.position.z = 0;
    markerMesh.pose.orientation.x = 0.0;
    markerMesh.pose.orientation.y = 0.0;
    markerMesh.pose.orientation.z = 0.0;
    markerMesh.pose.orientation.w = 1.0;

    markerCube.scale.x = 1.0;
    markerCube.scale.y = 1.0;
    markerCube.scale.z = 1.0;

    markerSphere.scale.x = 1.0;
    markerSphere.scale.y = 1.0;
    markerSphere.scale.z = 1.0;

    markerArrow.scale.x = 1.0;
    markerArrow.scale.y = 0.1;
    markerArrow.scale.z = 0.1;

    markerMesh.scale.x = 1.0;
    markerMesh.scale.y = 1.0;
    markerMesh.scale.z = 1.0;

    markerCube.color.r = 0.0f;
    markerCube.color.g = 1.0f;
    markerCube.color.b = 0.0f;
    markerCube.color.a = 1.0;

    markerSphere.color.r = 0.0f;
    markerSphere.color.g = 1.0f;
    markerSphere.color.b = 0.0f;
    markerSphere.color.a = 1.0;

    markerArrow.color.r = 0.0f;
    markerArrow.color.g = 1.0f;
    markerArrow.color.b = 0.0f;
    markerArrow.color.a = 1.0;

    markerMesh.color.r = 0.0f;
    markerMesh.color.g = 1.0f;
    markerMesh.color.b = 0.0f;
    markerMesh.color.a = 1.0;

    markerCube.lifetime = ros::Duration();
    markerSphere.lifetime = ros::Duration();
    markerArrow.lifetime = ros::Duration();
    markerMesh.lifetime = ros::Duration();

    while (marker_pub.getNumSubscribers() < 1)
    {
      if (!ros::ok())
      {
        return 0;
      }      
    }
    marker_pub.publish(markerCube);
    marker_pub.publish(markerSphere);
    marker_pub.publish(markerArrow);
    marker_pub.publish(markerMesh);
  }
}