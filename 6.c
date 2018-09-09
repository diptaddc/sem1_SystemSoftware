#include<unistd.h>
int main()
{
	char arr[100];
	int i;
	for (i = 0; i < 100; i++)
	{
		arr[i] = '\0';
	}
	read(0,arr,100);
	write(1,arr,100);
	return 0;

}