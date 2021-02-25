#include<stdio.h>
#include<malloc.h>
/*
int main()
{
 char str[] = "Hai";  
 printf("%s\n",str);
 //str[1] = 'i';   
 *(str+1)='i';
 printf("%s",str);
 return 0;
}
*/

int main()
{
  int size = 4;
  char *str = (char *)malloc(sizeof(char)*size);
  *(str+0) = 'H'; 
  *(str+1) = 'a';  
  *(str+2) = 'i';    
  *(str+3) = '\0';  
  *(str+1) = 'i';
   printf("%s",str);
   return 0;
}    

