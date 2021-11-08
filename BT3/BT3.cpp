#include <stdio.h>
#include<math.h>

int main()
{
	int r1, r2, d;//r1 r2 là bán kính 2 du?ng tròn, d là kho?ng cách gi?a 2 tâm du?ng tròn
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
