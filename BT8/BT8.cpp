#include <stdio.h>

int main()
{
	double n;
	double mean = 0;
	do
	{
		printf("nhap n di nao: ");
		scanf_s("%lf", &n);
	} while (n == 0);
	if (n < 0)
	{
		for (double i = n; i <= 1; i++)
		{
			mean += i;
		}
		mean /= (double)n;
	}
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			mean += i;
		}
		mean /= (double)n;
	}
	printf("gia tri trung binh la: %lf ", mean);
	return 0;
}
