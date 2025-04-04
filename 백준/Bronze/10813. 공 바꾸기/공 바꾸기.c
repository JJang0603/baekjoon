#include <stdio.h>

int main()
{
	int a, N, M;
	int i, j, temp;
	int arr[101] = {0};

	scanf("%d %d", &N, &M);

	for (a = 1; a <= N; a++)
	{
		arr[a] = a;
	}
	
	for (a = 1; a <= M; a++)
	{
		scanf("%d %d", &i, &j);
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (a = 1; a <= N; a++)
	{
		printf("%d ", arr[a]);
	}

	return 0;
}