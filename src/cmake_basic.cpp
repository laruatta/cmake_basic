#include <iostream>
using namespace std;

extern "C" 
{
#include "printlib.h"
//#include "sw_version.h"
}

void printVersionInfo(void)
{
    //std::cout << project_version;
}

int main(int argc, char **argv) 
{
    printVersionInfo();

    printHelloWorld();

	return 0;
}
