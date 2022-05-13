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
	pid_t childpid;
	int status;

	for (i = 0; i < 5; i++)
	{
		childpid =fork();
		if (childpid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:\n");
		}
		wait (&status);

		return (0);
	}
}
