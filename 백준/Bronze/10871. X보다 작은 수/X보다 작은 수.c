#include<stdio.h>

int main()
{
	int i, num, N, X;
	int A[10000];

	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		A[i] = num;
	}

	for (i = 0; i < N; i++)
	{
		if (A[i] < X)
		{
			printf("%d ", A[i]);
		}
	}
	
	return 0;
}