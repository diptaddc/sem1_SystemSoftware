
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
int main(int argc, char const *argv[])
{
	
	//printf("%s\n",argv[0]);
	if(argc < 2)
		printf("Please Enter Arguments!\n");
	else
	{
		struct stat details;
		stat(argv[1],&details);
		if (S_ISREG(details.st_mode))
			printf("Regular File\n");
		else if (S_ISDIR(details.st_mode))
			printf("Directory \n");
		else if (S_ISCHR(details.st_mode))
			printf("Character Device \n");
		else if (S_ISBLK(details.st_mode))
			printf("Block Device \n");
		else if (S_ISFIFO(details.st_mode))
			printf("Named Pipe (FIFO) \n");
		else if (S_ISLNK(details.st_mode))
			printf("Symlink \n");

	}
	return 0;
}