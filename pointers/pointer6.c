#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p,i;
    p=a; 
	p=&a[0];    
    printf("Printing the array elements using pointer\n");
    for(i=0;i<5;i++)   
    {
        printf("%d\n",*p);
      p++;
    }
    return 0;
}
