#include <stdio.h>

int main(int argc, char **argv)
{
	char c;

	if (argc == 2)
	{
		FILE *fp;
		fp = fopen(argv[1], "r");
		if (fp == NULL)
		{
			fprintf(stdout, "File does not exist or cannot be read.\n");
			return -1;
		}
		else {
			while (c != EOF)
			{	
				fprintf(stdout, "%c", c);
				c = fgetc(fp);
			}
			fclose(fp);
		}
	}
	else
	{
		printf("USAGE: dog <file>\n    Prints file to stdout. Similar to GNU's cat but only in 32 lines of code.\n");
	}

	return 0;
}
