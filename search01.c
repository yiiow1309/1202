#include<stdio.h>
#define SIZE 10
int main()
{
	int key,i, search;
	int list[SIZE] = {1,2,3,4,5,6,7,8,9};
	
	printf("Ž���� ���� �Է��ϼ���");
	scanf("%d",&key);
	
	for(i=0; i<SIZE; i++)
	    if(list[i] == key)
	 	   break;
		   
	if(i < SIZE)
	   printf("Ž�� �����迭�� %d�� �ֽ��ϴ�\n",list[i]);
	else
	   printf("Ž�� ���й迭�� %d�� �����ϴ�\n",key);
	
	return 0;
} 
