#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - executes the command @ls -1 /tmp in
 * 5 different child processes. Each child is created by the
 * same process(father)
 * waits for a child to exit before creating a new child
 *
 * Return: 0
 */
int main (void)
{
	int i;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	pid_t pid;
	pid_t childpid;
	int status;

	for (i = 0; i < 5; i++)
	{
		execve(argv[0], argv, NULL);
		pid = getpid();
		printf("%u\n", pid);

		childpid = fork();
		if (childpid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (childpid == 0)
		{
			wait (&status);
			childpid = getpid();
			printf("%u\n", childpid);
		}
		else
		{
			printf("Success");
		}
	}

	return (0);
}
