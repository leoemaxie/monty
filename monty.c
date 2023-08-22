#include "monty.h"

/**
 * main - Runs the Monty opcode.
 *
 * @ac: The number of command line argunents.
 * @av: An array of command line argunents.
 *
 * Return: 0 on success, EXIT_FAILURE on error.
 */
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	if (ac != 2)
	{

		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	return (0);
}
