#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int x;
	x = link("abc","hardlink");
	printf("%d\n",x);
	return 0;
}