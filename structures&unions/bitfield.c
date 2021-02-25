#include <stdio.h>
struct student
{
    int a:1;
	int b:32;
}st1,st2;

int main()
{
	//printf("%d\n",&st1.a);
	
	printf("\nSize ::: %d",sizeof(st1));
	return 0;
 }
 
 