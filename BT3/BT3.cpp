#include <stdio.h>
#include<math.h>

int main()
{
	int r1, r2, d;//r1 r2 l� b�n k�nh 2 du?ng tr�n, d l� kho?ng c�ch gi?a 2 t�m du?ng tr�n
	printf("Nhap ban kinh hinh tron thu nhat di nao: ");
	scanf_s("%d", &r1);
	printf("Nhap ban kinh hinh tron thu hai di nao: ");
	scanf_s("%d", &r2);
	printf("Nhap khoang cach giua hai tam hinh tron: ");
	scanf_s("%d", &d);
	if (d > r1 + r2)
	{
		printf("Hai hinh tron nay tach roi\n");
	}
	else if (d = r1 + r2)
	{
		printf("Hai hinh tron nay tiep xuc ngoai\n");
	}
	else if (d = abs(r2 - r1))
	{
		printf("Hai hinh tron nay tiep xuc trong\n");
	}
	else if (d > abs(r2 - r1) && d < r1 + r2)
	{
		printf("Hai duong tron nay giao nhau\n");
	}
	else if (d = 0)
	{
		printf("Hai duong tron nay bao nhau\n");
	}
	else
		printf("Hai duong tron nay chong khop len nhau\n");
	return 0;
}
