#include <stdio.h>

int main()
{
	int i, j, T;
	char ch[1001];

	scanf("%d", &T);
	
	for (i = 0; i < T; i++)
	{
		scanf("%s", ch);

		for (j = 0; ; j++)
		{
			if (ch[j] == '\0')
			{
				break;
			}
		}
		printf("%c%c\n", ch[0], ch[j - 1]);
	}

	return 0;
}