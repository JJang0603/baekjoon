#include <stdio.h>

int main(void)
{
	char A[4], B[4];
	int new_A, new_B;

	scanf("%s %s", A, B);
	new_A = ((int)A[0] - '0') + ((int)A[1] - '0') * 10 + ((int)A[2] - '0') * 100;
	new_B = ((int)B[0] - '0') + ((int)B[1] - '0') * 10 + ((int)B[2] - '0') * 100;

	if (new_A > new_B)
	{
		printf("%d\n", new_A);
	}
	else
	{
		printf("%d\n", new_B);
	}

	return 0;
}