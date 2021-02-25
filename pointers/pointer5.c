#include <stdio.h>
int var = 1;
int *ptr;
int main()
{
	ptr = &var;
	printf("var = %d", var);
	printf("\nvar = %d", (*ptr)++);
	int *p2;
	ptr=p2;
	p2++;
	p2=p2+5;
	printf("\naddress of var = %d", &var);
	printf("\naddress of var with ptr= %d\n", ptr);
	*ptr=48;
	printf("\nvar = %d", *ptr);
	return 0;
}


