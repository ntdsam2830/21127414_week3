#include <stdio.h>

int main()
{
	int n;
	printf("nhap n di nao: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int tongcacchuso = 0; // khởi tạo biến để lưu tổng các chữ số của số i
		int bienphu = i; // khởi tạo biến phụ để lưu giá trị của số i tương ứng, nếu tương tác trực tiếp với i, vòng lặp sẽ vô nghĩa
		while (bienphu != 0)
		{
			tongcacchuso += bienphu % 10;
			bienphu /= 10;
		}
		if (tongcacchuso == 10)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
