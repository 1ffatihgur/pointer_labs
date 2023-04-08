#include<stdio.h>

int topla(int *a, int *b)
{
	
	int toplam = 0;
	
	toplam = *a + *b;
	
	return toplam;
	
}

int main()
{
	
	int x,y;
	int toplam = 0;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d",&x);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&y);
	
	toplam = topla(&x,&y);
	
	printf("sayilarin toplami: %d",toplam);
	
	
	
	return 0;
}
