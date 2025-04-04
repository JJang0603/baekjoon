#include <stdio.h>

int main(void)
{
	int i, N;
	char ch[101];
	int sum = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf(" %c", &ch[i]);
		sum += ((int)ch[i] - '0');
	}
	printf("%d\n", sum);

	return 0;
}