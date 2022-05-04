#include "main.h"

/**
 * check97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	int frmFd, toFd, rd, cls, cls2;
	char buffer[BUFF];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE);
	frmFd = open(argv[1], O_RDONLY);
	if (frmFd < 0)
	{
		dprintf(STDERR_FILENO, ERR_READ, argv[1]);
		exit(98);
	}
	toFd = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((rd = read(frmFd, buffer, BUFF)) > 0)
	{
		if (toFd < 0 || (write(toFd, buffer, rd) != rd))
			dprintf(STDERR_FILENO, ERR_WRITE, argv[2]);
		exit(98);
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, ERR_READ, argv[1]);
		exit(98);
	}
	cls = close(frmFd);
	if (cls < 0)
		dprintf(STDERR_FILENO, ERR_CLOSE, frmFd), exit(100);
	cls2 = close(toFd);
	if (cls2 < 0)
		dprintf(STDERR_FILENO, ERR_CLOSE, toFd), exit(100);
	return (0);
}
