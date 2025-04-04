#include <stdio.h>

int main()
{
	int i, n;
	int arr[31] = {0};

	for (i = 1; i <= 28; i++)
	{
		scanf("%d", &n);
		arr[n]++;
	}
	
	for (i = 1; i <= 30; i++)
	{
		if (arr[i] != 1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}