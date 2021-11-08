#include <stdio.h>

int main()
{
	float so1, so2, so3, so4, min = 0, max = 0;
	printf("nhap so thu nhat: ");
	scanf_s("%f", &so1);
	printf("nhap so thu hai: ");
	scanf_s("%f", &so2);
	printf("nhap so thu ba: ");
	scanf_s("%f", &so3);
	printf("nhap so thu tu: ");
	scanf_s("%f", &so4);
	min = so1;
	max = so1;
	if (min > so2)
	{
		min = so2;
	}
	if (min > so3)
	{
		min = so3;
	}
	if (min > so4)
	{
		min = so4;
	}
	if (max < so2)
	{
		max = so2;
	}
	if (max < so3)
	{
		max = so3;
	}
	if (max < so4)
	{
		max = so4;
	}
	printf("so lon nhat la: %.1f", max);
	printf("\nso nho nhat la: %.1f\n", min);
}
