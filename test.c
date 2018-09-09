#include<stdio.h>
int main(int argc, char const *argv[])
{
	if(argc==1)
		printf("No Arguments\n");
	else
		printf("%s\n",argv[1]);
	return 0;
}