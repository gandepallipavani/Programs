#include <stdio.h>  
int *getarray()  
{  
    static int arr[5],i;  
    printf("Enter the elements in an array : ");  
    for( i=0;i<5;i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
return arr;  
}  
int main()  
{  
  int *p=getarray();
  //*p=arr;
  int i;  
  printf("\nElements of array are :");  
  for(i=0;i<5;i++)  
    {  
         printf( "*(p + %d) : %d\n", i, *(p + i));
    }  
    return 0;  
}  
