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
	if (sqrt(n) == (int)sqrt(n))//n?u nhu can b?c 2 c?a s? n nhân nhau mà ra dc s? nguyên thì n là s? chính phuong
	{
		printf("day la so chinh phuong\n");
	}
	else
	{
		printf("day khong phai la so chinh phuong\n");
	}
	return 0;
}

