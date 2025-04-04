#include <stdio.h>

int main()
{
	int a, b, N, M;
	int i, j, k;
	int arr[101] = {0};

	scanf("%d %d", &N, &M);

	for (a = 1; a <= M; a++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (b = i; b <= j; b++)
		{
			arr[b] = k;
		}
	}
	
	for (a = 1; a <= N; a++)
	{
		printf("%d ", arr[a]);
	}

	return 0;
}