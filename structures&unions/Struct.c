#include <stdio.h>
struct student
{
    char name[20];
	int rollno;
    float marks;
}st1,st2;


/* function declaration */
void printStudent( struct student st1 );

int main( ) {

    struct student st1={"pavani",22, 90.2};     /* Declare st1  of type student */
	struct student st2;        
 
   /* st1 specification */
	
    printf("Name: %s,Roll Num: %d,Marks: %f",st1.name,st1.rollno,st1.marks);
	
    printf("2nd student\n");
	
    scanf("%s", &st2.name);
    scanf("%d", &st2.rollno);
	scanf("%f", &st2.marks);
  
 
   /* print st1 info */
   printStudent( st1 );

   /* Print st2 info */
   printStudent( st2 );

   return 0;
}

void printStudent( struct student st1 ) {

   printf("\nName: %s,Roll Num: %d,Marks: %f",st1.name,st1.rollno,st1.marks);
	
}