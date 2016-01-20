#include <Robot_Client.h>

using namespace std;

int main(int argc, char *argv[])
{
#ifdef PLATFORM_IS_LINUX
	Robots::SendRequest(argc, argv, "/usr/Robots/resource/Robot_Type_I/Robot_VIII/Robot_VIII.xml");
#endif
#ifdef PLATFORM_IS_WINDOWS
	Robots::SendRequest(argc, argv, "C:\\Robots\\resource\\Robot_Type_I\\Robot_VIII\\Robot_VIII.xml");
#endif

	return 0;
}
