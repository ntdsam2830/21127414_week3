#include<stdio.h>

int main()
{
	int chisodiencu, chisodienmoi, tongsotien, tieuthu;
	do
	{
		printf("Nhap chi so dien cu: ");
		scanf_s("%d", &chisodiencu);
		printf("Nhap chi so dien moi: ");
		scanf_s("%d", &chisodienmoi);
	} while (chisodiencu > chisodienmoi);
	tieuthu = chisodienmoi - chisodiencu;
	if (tieuthu <= 50)
	{
		tongsotien = tieuthu * 1243;
	}
	else if (tieuthu > 50 && tieuthu <= 100)
	{
		tongsotien = 50 * 1243 + (tieuthu - 50) * 1304;
	}
	else if (tieuthu > 100 && tieuthu <= 150)
	{
		tongsotien = 50 * 1243 + 50 * 1304 + (tieuthu - 100) * 1644;
	}
	else if (tieuthu > 150 && tieuthu <= 200)
	{
		tongsotien = 50 * 1243 + 50 * 1304 + 50 * 1644 + (tieuthu - 150) * 1806;
	}
	else if (tieuthu > 200 && tieuthu <= 250)
	{
		tongsotien = 50 * 1243 + 50 * 1304 + 50 * 1644 + 50 * 1806 + (tieuthu - 200) * 1976;
	}
	else if (tieuthu >= 251)
	{
		tongsotien = 50 * 1243 + 50 * 1304 + 50 * 1644 + 50 * 1806 + 50 * 1976 + (tieuthu - 250) * 2297;
	}
	printf("Tien dien ban phai tra trong thang nay la: %d\n", tongsotien);
}

