#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	int *pi;
	
	pi = &a;
	
	printf("a = %d, b = %d\n ",a,b);
	printf("a ���ּ� = %u\n",&a);
	printf("pi�� �� = %u\n",pi);
	printf("pi�� �ּ� = %u",&pi);
	
	*pi = 6;
	printf("a = %d, b = %d, *pi = %d\n",a,b,*pi);
	
	a = 7;
	printf("a = %d, b = %d, *pi = %d\n",a,b,*pi); 
	
	return 0 ;
} 
