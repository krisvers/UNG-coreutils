#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for (int i = 2; i <= argc; i++)
		{
			fprintf(stdout, "%s ", argv[i-1]);
		}
		fprintf(stdout, "\n");
	}

	return 0;
}
