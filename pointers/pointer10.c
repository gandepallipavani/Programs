#include<stdio.h>
int main()
{
 char *str; 
 str = "Hai";    
 *(str+1) = 'i';
 printf("%s",str);
 return 0;
}
