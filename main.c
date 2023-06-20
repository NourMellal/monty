#include "monty.h"

int main(int argc, char **argv)
{
	FILE *fp;

	if (argc != 2)
		error_arguments();

	fp = fopen(argv[1], "r");

	if(fp == NULL)
		open_error(argv);

	return (0);
}