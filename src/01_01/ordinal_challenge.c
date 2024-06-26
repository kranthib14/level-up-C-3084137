#include <stdio.h>
char *ord[] = {"st", "nd", "rd", "th"};
char *ordinal(int v)
{
	int rem = v % 10;
	return ord[((rem < 4) && rem != 0) ? rem - 1 : 3];
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for (c = 1; c <= 20; c++)
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
					 c, ordinal(c),
					 c + 20, ordinal(c + 20),
					 c + 40, ordinal(c + 40),
					 c + 60, ordinal(c + 60),
					 c + 80, ordinal(c + 80));
	}

	return (0);
}
