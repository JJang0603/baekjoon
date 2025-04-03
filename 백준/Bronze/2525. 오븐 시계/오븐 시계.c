#include <stdio.h>

void oven(int h, int m, int t)
{
	int total = h * 60 + m + t;

	if (total / 60 >= 24)
	{
		h = total / 60 - 24;
		m = total % 60;
	}
	else
	{
		h = total / 60;
		m = total % 60;
	}

	printf("%d %d\n", h, m);
}

int main(void)
{
	int h, m, t;

	scanf("%d %d", &h, &m);
	scanf("%d", &t);

	oven(h, m, t);

	return 0;
}