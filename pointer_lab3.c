#include<stdio.h>

int main()
{
	int n;

	printf("dizi eleman sayisi girin: ");
	scanf("%d",&n);
	
	int dizi[n];
	
	int *ptr;
	ptr = dizi;
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",(ptr+i));
	}
		
	for(i=0;  i<n; i++)
	{
		printf("%d. eleman: %d ve adresi: %p\n",i+1,*(ptr+i),ptr+i);	
	}	
	
	return 0;
}
