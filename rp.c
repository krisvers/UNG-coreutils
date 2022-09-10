/*
	Very simple program for copying files
	
	krisvers - 9/10/22
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *file_one;
	FILE *file_two;
	char c;

	if (argc == 3)
	{
		// Checks for file_one to exist, then opens both
		if (fopen(argv[1], "r") != NULL)
		{
			file_one = fopen(argv[1], "r");
			file_two = fopen(argv[2], "w");
		}
		// File doesn't exist
		else {
			fprintf(stdout, "File %s does not exist or cannot be read.\n",argv[1]);
			return -1;
		}

		// Copys until end of file	
		while (c != EOF)
		{
			fprintf(file_two, "%c", c);
			c = fgetc(file_one);
		}
	}
	else {
		// Prints help
		fprintf(stdout, "USAGE: rp <file> <copied file>\n    Bad recreation of cp but smol.\n");
	}

	return 0;
}
