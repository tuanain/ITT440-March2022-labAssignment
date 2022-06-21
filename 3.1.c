#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	void sigint_handler(int sig);
	char s[200];

	if(signal(SIGINT, sigint_handler) == SIG_ERR)
	{
		perror("signal");
		exit(1);
	}
	printf("Enter a string:\n");
	if(fgets(s,200,stdin) == NULL)
	perror("gets");
	else
	printf("You entered: %s\n",s);
	return 0;
}
void sigint_handler(int sig)
{
	printf("Don't disturbe me!");
}