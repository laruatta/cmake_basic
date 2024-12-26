//#include <iostream>
using namespace std;

extern "C" 
{
#include "printlib.h"
}

int main(int argc, char **argv) {
	
    printHelloWorld();

	return 0;
}
