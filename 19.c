#include<stdio.h>
#include<unistd.h>
#include<sys/time.h>
#include<time.h>
int main()
{
	struct timespec time;
	int pid  = getpid();
	printf("Process ID: %d\n", pid);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&time);
	printf("Nanoseconds Required: %ld\n",time.tv_nsec);
}