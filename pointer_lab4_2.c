#include<stdio.h>

int main()
{
	
	int sayac=0;
	char array[] = "w3resource";
	
	char *ptr;
	ptr = array;
	
	while(*ptr != '\0')
	{
		sayac++;
		ptr++;
	}
	
	printf("The length of the given 'w3resource' is: %d",sayac);
	
	
	
	return 0;
}
