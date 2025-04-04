#include <stdio.h>

int main()
{
	int a, b, c;
	int N, M;
	int i, j, temp;
	int arr[101] = {0};

	scanf("%d %d", &N, &M);
	for (a = 1; a <= N; a++)
	{
		arr[a] = a;
	}
	
	for (a = 0; a < M; a++)
	{
		scanf("%d %d", &i, &j);
		for (b = i; b < j; b++)
		{
			for (c = j; c > b; c--)
			{
				temp = arr[c];
				arr[c] = arr[c - 1];
				arr[c - 1] = temp;
			}
		}
	}
	
	for (a = 1; a <= N; a++)
	{
		printf("%d ", arr[a]);
	}

	return 0;
}