#include<stdio.h>

int main()
{
	int i, N, num, v;
	int arr[100];
	int cnt = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}

	scanf("%d", &v);
	for (i = 0; i < N; i++)
	{
		if (arr[i] == v)
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}