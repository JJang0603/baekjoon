#include <stdio.h>

int main()
{
	int i;
	int cnt = 0;
	char ch[101];

	scanf("%s", ch);
	for (i = 0; ; i++)
	{
		if (ch[i] == '\0')
		{
			break;
		}
	}

	printf("%d\n", i);

	return 0;
}