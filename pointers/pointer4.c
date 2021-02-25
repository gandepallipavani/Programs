#include <stdio.h>
#include<malloc.h>
int main()
{
//int *p; 	
int a=100;
int *p=(int *)malloc(sizeof(int));
p=&a;
free(p);
printf("%p %d",p,*p);
return 0;
}
