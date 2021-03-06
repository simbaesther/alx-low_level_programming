#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t ppid;
	pid_t my_pid;
	pid_t pid;

	printf("Before fork\n");
	ppid = getppid();
	my_pid = getpid();
	printf("My ppid is %u\n", ppid);
	printf("My pid is %u\n", my_pid);

	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);

	return (0);
}
