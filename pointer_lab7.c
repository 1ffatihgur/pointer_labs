#include<stdio.h>

int main()
{
	int uzunluk=0;
	
	char array[] = "w3resource";
	
	char *ptr;
	ptr = array;

	int i;
	
	while(*ptr != '\0')
	{
		ptr++;
		uzunluk++;
	}
	
	printf("uzunluk: %d\n",uzunluk);
	

	
	for(i=uzunluk-1; i>=0; i--)
	{
		printf("%c",*(ptr+i));
	}
	
		
	return 0;
}
