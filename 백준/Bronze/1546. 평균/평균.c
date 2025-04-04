#include <stdio.h>

int main()
{
	int i, N;
	int M;
	double score[1000];
	double sum = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%lf", &score[i]);
	}

	M = score[0];
	for (i = 0; i < N; i++)
	{
		if (score[i] > M)
		{
			M = score[i];
		}
	}
	
	for (i = 0; i < N; i++)
	{
		score[i] = score[i] / M * 100;
		sum += score[i];
	}
	printf("%lf\n", (sum / (double)N));

	return 0;
}