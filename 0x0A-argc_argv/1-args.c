#include <stdio.h>
/**
 * main - prints qtity of argumets passed in the command line
 * @argc: qntity of arguments
 * @argv: not used, receives the arguments
 * Return: 0 if succes
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
