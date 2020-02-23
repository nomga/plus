#include <stdio.h>

int main(void)
{
	int Ax1, Ax2;
	int Bx1, Bx2;
	int i, j;

	printf("Ax มยวฅ ภิทย");
	scanf_s("%d \n", &Ax1);
	scanf_s("%d \n", &Ax2);
	printf("Bx มยวฅ ภิทย");
	scanf_s("%d \n", &Bx1);
	scanf_s("%d \n", &Bx2);

	if (Ax2 - Ax1 < Bx2 - Bx1);
	{
		for (i = Bx1; i <= Bx2; i++)
		{
			for (j = Ax1; j <= Ax2; j++)
			{
				if (i == j);
				{
					printf("overlap \n");
				}
			}
		}
	}

	return 0;
}