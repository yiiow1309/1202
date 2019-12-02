#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	int *pi;
	
	pi = &a;
	
	printf("a = %d, b = %d\n ",a,b);
	printf("a 狼林家 = %u\n",&a);
	printf("pi狼 蔼 = %u\n",pi);
	printf("pi狼 林家 = %u",&pi);
	
	*pi = 6;
	printf("a = %d, b = %d, *pi = %d\n",a,b,*pi);
	
	a = 7;
	printf("a = %d, b = %d, *pi = %d\n",a,b,*pi); 
	
	return 0 ;
} 
