#include<stdio.h>
void fun()
{
	printf("In function\n");
}

int main()
{
	fun();
	
	void (*fun_ptr)()=&fun;
	(*fun_ptr)();

	void (*fun_ptr)();
	fun_ptr=&fun;
	//(*fun_ptr)();
	return 0;
}
