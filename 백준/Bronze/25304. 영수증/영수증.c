#include <stdio.h>

int main(void)
{
	int i, X, N, a, b;
	int sum = 0;

	scanf("%d", &X);
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		sum += a * b;
	}

	if (X == sum)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}