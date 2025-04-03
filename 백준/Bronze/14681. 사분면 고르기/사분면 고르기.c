#include <stdio.h>

int quadrant(int x, int y)
{
	if ((x > 0) && (y > 0))
		return 1;
	else if ((x < 0) && (y > 0))
		return 2;
	else if ((x < 0) && (y < 0))
		return 3;
	else
		return 4;
}

int main(void)
{
	int x, y;

	scanf("%d", &x);
	scanf("%d", &y);

	printf("%d\n", quadrant(x, y));

	return 0;
}