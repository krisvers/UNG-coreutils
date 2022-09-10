/*
	Very simple program for moving files (buggy)
	
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
		// Checks if file_one exists, then opens both
		if (fopen(argv[1], "r") != NULL)
		{
			file_one = fopen(argv[1], "r");
			file_two = fopen(argv[2], "w");
		}
		// Error checking
		else {
			fprintf(stdout, "File %s does not exist or cannot be read.\n",argv[1]);
			return -1;
		}

		// Prints until end of file
		while (c != EOF)
		{
			c = fgetc(file_one);
			fprintf(file_two, "%c", c);
		}
		
		c = fgetc(file_one);
		fprintf(file_two, "%c", c);
	}
	else {
		// Prints help
		fprintf(stdout, "USAGE: tp <file> <copied file>\n    Bad recreation of mv but smol.\n");
		return 0;
	}

	// Close files and delete file_one
	fclose(file_one);
	remove(argv[1]);
	fclose(file_two);

	return 0;
}
