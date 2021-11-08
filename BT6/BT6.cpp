#include <stdio.h>
float ham_nhap();
void tinh_toan(float n);

int main()
{
	float n = ham_nhap();//gọi hàm nhập ra
	tinh_toan(n);//gọi hàm tính toán 
	return 0;
}

float ham_nhap()
{
	float n;
	do
	{
		printf("nhap n: ");
		scanf_s("%f", &n);
	} while (n <= 0 || n != (int)n);
	return n;
}
void tinh_toan(float n)
{
	int so = (int)n;
	int count = 0;
	for (int i = 0; i <= so; i++)
	{
		if (i % 2 != 0)
		{
			count++;
		}
	}
	printf("co %d so le trong khoang tu 0 den %.f\n", count, n);
}

