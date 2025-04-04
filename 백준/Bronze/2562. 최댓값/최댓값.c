#include <stdio.h>
#define N 9

int main()
{
	int i;
	int max, index;
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];

	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	printf("%d\n", max);
	printf("%d\n", (index + 1));

	return 0;
}