#include<stdio.h>

int main()
{
	char loaiphong;
	int songaythue;
	printf("Ban muon thue loai phong nao(A, B, C): ");
	scanf_s("%c", &loaiphong);
	printf("Ban muon thue bao nhieu ngay: ");
	scanf_s("%d", &songaythue);
	float tongtien = 0;
	switch (loaiphong)
	{
	case 'A':
	{
		tongtien = (double)songaythue * 450000;
		if (songaythue > 10)
		{
			tongtien *= 0.9;
		}
		break;
	}
	case 'B':
	{
		tongtien = (double)songaythue * 350000;
		if (songaythue > 10)
		{
			tongtien *= 0.92;
		}
		break;
	}
	case 'C':
	{
		tongtien = (double)songaythue * 250000;
		if (songaythue > 10)
		{
			tongtien *= 0.92;
		}
		break;
	}
	default:
		break;
	}
	printf("Tien thue phong cua %d ngay= %.4f", songaythue, tongtien);
}

