#include <stdio.h>

int main(void)
{
	int i, T, A, B;

	scanf("%d", &T);
	for (i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, (A + B));
	}

	return 0;
}