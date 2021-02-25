#include<stdio.h>
void fun(int a)
{
	printf("%d\n",a);
}

int main()
{
	void (*fun_ptr)(int)=&fun;
	(*fun_ptr)(5);
	void (*fun_ptr2)(int)=fun;
	fun_ptr2(5);
	
	return 0;
}
