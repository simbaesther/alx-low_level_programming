#include <stdio.h>
#include <unistd.h>

/**
 * main - PID and PPID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid = getpid();
    pid_t my_ppid = getppid();

    printf("%u\n", my_pid);
    printf("%u\n", my_ppid);
    return (0);
}
