#include <stdio.h>

void alarm(int h, int m)
{
	int total = h * 60 + m - 45;

	if (total < 0)
	{
		total += 60 * 24;
		h = total / 60;
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
	int h, m;

	scanf("%d %d", &h, &m);
	alarm(h, m);

	return 0;
}