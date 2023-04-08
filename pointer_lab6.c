#include<stdio.h>

int main()
{
	
	int n;
	int toplam = 0;
	
	printf("dizi eleman sayisini giriniz: ");
	scanf("%d",&n);
	
	int dizi[n];
	
	int *ptr;
	ptr = dizi;
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("%d. elemani gir: ",i+1);
		scanf("%d",(ptr+i));
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d elaman: %d ve adresi %p\n",i+1,*(ptr+i),ptr+i);
	}
	
	for(i=0; i<n; i++)
	{
		toplam = toplam + *(ptr+i);
	}
	
	printf("toplam = %d",toplam);
	
	
	return 0;
}
