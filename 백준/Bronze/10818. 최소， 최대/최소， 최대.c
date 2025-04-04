#include<stdio.h>
int A[1000000];

int main()
{
	int i, N;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
		if (A[i] > max)
		{
			max = A[i];
		}

		if (A[i] < min)
		{
			min = A[i];
		}
	}
	printf("%d %d\n", min, max);
	
	return 0;
}