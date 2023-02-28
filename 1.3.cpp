#include<stdio.h>
#include<conio.h>
#include<math.h>

typedef struct ToaDo {
	int x;
	int y;
}TOADO;
void nhapToaDo(TOADO*a)
{
	printf("Nhap toa do x:");
	scanf("%d",&a->x);
	printf("NHap toa do y:");
	scanf("%d",&a->y);
}
void xuatToaDo(TOADO a)
{
	printf("=> toa do la :(%d,%d)\n",a.x,a.y);
}
int main()
{
	TOADO a;
	nhapToaDo(&a);
	xuatToaDo(a);
	return 0;
}
