#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void childTask()
{
	printf("salam, i'm a child");
}
void parentTask()
{
	printf("salam i'm their parents");
}
int main (void)
{
	pid_t pid = fork();
	if (pid == fork())
{
	childTask();
	exit(EXIT_SUCCESS);
}
	else if(pid > 0)
{
	wait(NULL);
	parentTask();
}
	else
{
	printf("unable to create child process\n");
}
	return EXIT_SUCCESS;
}
