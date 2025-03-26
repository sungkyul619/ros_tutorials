#include <nodelet/loader.h>
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "local_planner_nodelet");

  nodelet::Loader nodelet;
  nodelet::M_string remap(ros::names::getRemappings());
  nodelet::V_string nargv;
  std::string nodelet_name = ros::this_node::getName();
  nodelet.load(nodelet_name, "LocalPlannerNodelet", remap, nargv);
  ros::spin();

  return 0;
}
/*
이 예제는 nodelet을 로드하고 실행하는 코드.
nodelet과 roscpp 패키지가 ROS 환경에 이미 설치되어 있고, 
catkin_make 또는 catkin build 명령어로 빌드 시 자동으로 CMakeLists.txt와 package.xml에서 정의된 
의존성들을 확인하고, 관련 라이브러리들을 자동으로 연결해 줍니다.
그래서, #include <nodelet/loader.h>와 같은 헤더 파일을 찾을 수 있는 것입니다.
*/

