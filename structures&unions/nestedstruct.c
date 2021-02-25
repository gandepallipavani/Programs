

#include<stdio.h>  
struct address   
{  
    char city[20];  
    int pin;  
    char phone[14];  
}add2;  
struct employee  
{  
    char name[20];  
    struct address add;  
};  
void main ()  
{  
    struct employee emp={"pavani",{"vizag",8985}};  
    //printf("Enter employee information?\n");  
   // scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone); 

    printf("Printing the employee information....\n");  
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
	printf("\nSize of add::: %d",sizeof(add2));
	printf("\nSize of emp::: %d",sizeof(emp));
}  



/*
#include<stdio.h>  
  
struct employee  
{  
    char name[20];  
	struct address   
	{  
    char city[20];  
    int pin;  
    char phone[14];  
	}add;
};  
void main ()  
{  
    struct employee emp={"pavani",{"vizag",531098, "8985"}};  
    //printf("Enter employee information?\n");  
   // scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone); 

    printf("Printing the employee information....\n");  
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
	printf("\nSize of add::: %d",sizeof(emp.add));
	printf("\nSize of emp::: %d",sizeof(emp));
}  

*/