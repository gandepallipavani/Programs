#include <stdio.h>
#include <string.h>
int main()
{
char str[]="Hello World";
char *p;
int i;
p=str;
printf("%c\n",*p);
//p =p+1;
//printf("Next character is:%c\n",*p);
printf("Printing all the characters in a string\n");
//p=str;  
for(i=0;i<strlen(str);i++)
{
printf("%c ",*p);
p++;
}
return 0;
}
