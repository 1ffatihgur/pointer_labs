#include<stdio.h>

int main()
{
	
	int sayac=0;
	char array[] = "w3resource";
	
	char *ptr;
	ptr = array;
	int i;
	
	for(i=0; ptr[i] != '\0'; i++)
	{
		sayac++;
	}
	
	printf("The length of the given 'w3resource' is: %d",sayac);
	
	
	
	return 0;
}
