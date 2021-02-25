//#pragma pack(2)
#include <stdio.h>
struct student
{
    char name[20];
	int rollno;
	char d;
    double marks;
	char e;
}st1,st2;


int main()
{
	printf("\nSize ::: %d",sizeof(st1));
	printf("\nadd1 ::: %p",&st1.name);
	printf("\nadd2 ::: %u",&st1.rollno);
	printf("\nadd1 ::: %u",&st1.d);
	printf("\nadd2 ::: %u",&st1.marks);
	printf("\nadd1 ::: %u",&st1.e);
	return 0;
 }