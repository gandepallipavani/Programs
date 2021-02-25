#include <stdio.h>
struct student
{
    char name[20];
	int rollno;
    float marks;
}st1,st2;

typedef struct student sttt;
int main()
{
	sttt st1={"pavani",22, 90.2};
    printf("Name: %s,Roll Num: %d,Marks: %f",st1.name,st1.rollno,st1.marks);
	
	printf("\nSize ::: %d",sizeof(st1));
	return 0;
 }