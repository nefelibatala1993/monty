#include "monty.h"

char *buff = NULL;
stack_t *stack = NULL;

/**
 */
int main(int argc, char **argv)
{
	FILE *fp;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	read_file(fp);
	exit(EXIT_SUCCESS);
}