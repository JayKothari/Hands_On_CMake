#include<stdio.h>
#include "add_op.h"
#include <multiple_op.h>
#include "OLASConfig.h"

int main(int argc,char* argv[])
{
	printf("Hello World\n");
	printf("add %d + %d = %d\n",10,20,add(10,20));
	printf("multi %d * %d = %d\n",10,20,multiple(10,20));
//printf("Version Major [%d] Minor [%d]\n", hands_on_cmake_major , hands_on_cmake_minor);
	printf("Version Major [%d]\n", hands_on_cmake_major);
#define hands_on_cmake_major 
	return 0;
}
