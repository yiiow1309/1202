#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	int *pi;
	
	pi = &a;
	
	printf("a = %d, b = %d\n ",a,b);
	printf("a 의주소 = %u\n",&a);
	printf("pi의 값 = %u\n",pi);
	printf("pi의 주소 = %u",&pi);
	
	*pi = 6;
	printf("a = %d, b = %d, *pi = %d\n",a,b,*pi);
	
	a = 7;
	printf("a = %d, b = %d, *pi = %d\n",a,b,*pi); 
	
	return 0 ;
} 
