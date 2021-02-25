#include <stdio.h>
struct student
{
    char name[20];
	int rollno;
	char d;
    float marks;
}st1,st2;


int main()
{
	printf("\nSize ::: %d",sizeof(st1));
	printf("\nadd1 ::: %d",&st1);
	printf("\nadd2 ::: %d",&st2);
	return 0;
 }