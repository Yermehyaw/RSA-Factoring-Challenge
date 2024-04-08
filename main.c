#include "rsa.h"

#define MAX 30 /* Expected max length of no to be factored */

/**
 * main - Generates factors
 * @argc: Arg count
 * @argv: Arg vector
 *
 * Description: This functiom has limited guards as it assumes the file
 * is delibrately written by the user. There should be no whitesapce in the
 * in any line, and it should be one integer per line.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	size_t len;
	int line;
	FILE *op;
	char *buf;  /* number to be factored */

	line = 1; /* arbitrary value */
	len = 0;
	buf = NULL;
	if (argc != 2)
	{
		printf("Error: Usage factors <file>\n");
		fprintf(stderr, "Usage Error\n");
		exit(EXIT_FAILURE);
	}
	op = fopen(argv[1], "r");
	if (op == NULL)
	{
		perror("Error: Couldnt open file\n");
		exit(EXIT_FAILURE);
	}
	while (line != -1)
	{
		line = getline(&buf, &len, op);
		/*if (line == -1)  getline() failed*/
/*		{*/
		/*	perror("Error while reading fie");*/
		/*	free(buf);*/
		/*	exit(EXIT_FAILURE);*/
		/*}*/
		factors(buf);
	}
	free(buf);
	fclose(op);
	exit(EXIT_SUCCESS);
}
