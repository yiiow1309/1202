#include<stdio.h> 
int main()
{
	int i = 10;
	int *pi = &i;
	
	printf("i = %d pi = %d\n",i,pi);
	(*pi)++;
	printf("i = %d pi = %d\n",i,pi);
	*pi++;
	printf("i = %d pi = %d\n",i,pi);
	
	return 0;	
}
