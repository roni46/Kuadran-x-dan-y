#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main ()
{
    printf("PROOGRAM MENGETAHUI KUADRAN X DAN Y\n");
    printf("BY M Achmad Sahroni NIM 311620782\n");
    printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
	int x,y;
	printf("mengetahui kuadran dari inputan koordinat x dan y\n");
	printf("------------------\n");
	printf("masukan nilai x :");
	scanf("%i",&x);
	printf("masukan nilai y :");
	scanf("%i",&y);

	if(x>0 && y>0)
	printf("kuadran 1");
	if(x>0&&y<0)
	printf("kuadraan 2");
	if(x<0 && y<0)
	printf("kuadran 3");
	if(x<0 && y>0)
	printf("kuadran 4");
	if(x==0 &&y==0)
	printf ("titik pusat");


}
