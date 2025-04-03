#include <stdio.h>

int dice(int d1, int d2, int d3)
{
	if ((d1 == d2) && (d2 == d3))
	{
		return (10000 + d1 * 1000);
	}
	else if (d1 == d2)
	{
		return (1000 + d1 * 100);
	}
	else if (d2 == d3)
	{
		return (1000 + d2 * 100);
	}
	else if (d3 == d1)
	{
		return (1000 + d3 * 100);
	}
	else
	{
		if ((d1 > d2) && (d1 > d3))
			return (d1 * 100);
		else if ((d2 > d1) && (d2 > d3))
			return (d2 * 100);
		else
			return (d3 * 100);
	}
}

int main(void)
{
	int d1, d2, d3;

	scanf("%d %d %d", &d1, &d2, &d3);
	printf("%d\n", dice(d1, d2, d3));

	return 0;
}