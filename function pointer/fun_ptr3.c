#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}

int main()
{
	int (*fun_ptr)(int,int)=&add;
	printf("sum::%d\n",(*fun_ptr)(5,10));
	
	return 0;
}
