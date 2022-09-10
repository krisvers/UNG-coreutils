/*
	Very simple program for creating and editing files
	
	krisvers - 9/10/22
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;

	if (argc == 2)
	{
		// Just create file
		fp = fopen(argv[1], "w");
		fputc(EOF, fp);
	}
	// If arg 2 is in quotes or a single word
	else if (argc == 3)
	{
		fp = fopen(argv[1], "w");
		fputs(argv[2], fp);
		fputc('\n', fp);
	}
	// If args 3..n is by itself
	else if (argc > 3)
	{
		fp = fopen(argv[1], "w");
		for (int i = 3; i <= argc; i++)
		{
			fputs(argv[i-1], fp);
			// Adds spaces because of words being separated
			fputc(' ', fp);
		}
		fputc('\n', fp);
	}
	else {
		// Prints usage
		fprintf(stdout, "USAGE: mk <file> <contents>\n    Bad recreation of touch.\n");
		return 0;
	}

	fclose(fp);

	return 0;
}
