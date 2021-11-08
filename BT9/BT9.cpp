#include <stdio.h>

int main()
{
	double n, tong = 0; // khởi tạo biến tổng, gán = 0
	do
	{
		printf("nhap n di nao: ");
		scanf_s("%lf", &n);
		tong += n; // cộng các số đã nhập
	} while (n != 0);
	printf("tong cac so vua nhap la: %lf\n", tong);
	return 0;
}
