#include<stdio.h>
#include<unistd.h>
int main()
{
	int x;
	x = symlink("abc","softlink");
	printf("%d\n",x);
	return 0;
}

