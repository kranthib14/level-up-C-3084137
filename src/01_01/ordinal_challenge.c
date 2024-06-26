#include <stdio.h>
char *ord[] = {"st", "nd", "rd", "th"};
char *ordinal(int v)
{
	/* catch exceptions */
	if (v == 11 || v == 12 || v == 13)
		return ("th");
	v %= 10;
	return ord[((v < 4) && v != 0) ? v - 1 : 3];
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
