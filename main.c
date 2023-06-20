#include "monty.h"
int number;
int main(int argc, char **argv)
{
	if (argc != 2)
		error_arguments();
	open_and_read(argv);
	return (0);
}