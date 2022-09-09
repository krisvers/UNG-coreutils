#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;

	if (argc == 2)
	{
		fp = fopen(argv[1], "w");
		fputc(EOF, fp);
	}
	else if (argc == 3)
	{
		fp = fopen(argv[1], "w");
		fputs(argv[2], fp);
		fputc('\n', fp);
	}
	else if (argc > 3)
	{
		fp = fopen(argv[1], "w");
		for (int i = 3; i <= argc; i++)
		{
			fputs(argv[i-1], fp);
			fputc(' ', fp);
		}
		fputc('\n', fp);
	}
	else {
		fprintf(stdout, "USAGE: mk <file> <contents>\n    Bad recreation of touch.\n");
		return 0;
	}

	fclose(fp);

	return 0;
}
