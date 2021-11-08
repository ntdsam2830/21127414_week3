#include <stdio.h>
#include <math.h>

int main()
{
	int n, S2 = 0, P2 = 1, S3 = 0;
	double	S1 = 0;
	printf("nhap n di nao: ");
	scanf_s("%d", &n);
	for (double i = 2; i <= n; i++)
	{
		S1 += ((i - 1) / i);
	}
	for (int i = 1; i <= n; i++)
	{
		S2 += i * (i + 1);
	}
	for (int i = 1; i <= n; i++)
	{
		S3 += pow(i, i);
	}
	printf("tong cau a la: %lf\n", S1);
	printf("tong cau b la: %d\n", S2);
	printf("tong cau c la: %d\n", S3);
	return 0;
}
