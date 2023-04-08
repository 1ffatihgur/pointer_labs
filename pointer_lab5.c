#include<stdio.h>

void swap(int *a, int *b, int *c)
{
	
	int gecici = *a;
	*a = *c;
	*c = gecici;
	
}



int main()
{
	
	int x = 5, y = 6, z = 7;
	
	swap(&x,&y,&z);
	
	printf("x: %d, y: %d, z: %d",x,y,z);
	
	return 0;
}
