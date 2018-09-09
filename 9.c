#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<inttypes.h>
#include<stdio.h>
int main()
{
	struct stat details;
	int k = stat("XYZ",&details);
	printf("%ld  \n",(details).st_ino);
	return 0;
}