#include <stdio.h>

int main()
{
	int N;
	int min = 1000000, max = -1000000;

	scanf("%d", &N);
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d %d", min, max);

	return 0;
}