#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 2; i <= argc; i++)
		{
			remove(argv[i-1]);
		}
	}
	else {
		fprintf(stdout, "USAGE: del <file>\n    Bad version of rm.\n");
	}

	return 0;
}
