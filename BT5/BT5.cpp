#include <stdio.h>
#include <math.h>


int main()
{
	float n;
	do
	{
		printf("nhap n: ");
		scanf_s("%f", &n);
	} while (n <= 0 || n != (int)n);
	if (sqrt(n) == (int)sqrt(n))//n?u nhu can b?c 2 c?a s? n nh�n nhau m� ra dc s? nguy�n th� n l� s? ch�nh phuong
	{
		printf("day la so chinh phuong\n");
	}
	else
	{
		printf("day khong phai la so chinh phuong\n");
	}
	return 0;
}

