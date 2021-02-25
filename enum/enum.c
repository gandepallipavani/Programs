#include<stdio.h>
int main()
{
	typedef enum {SUN,MON=5,TUE,WED,THU=9,FRI,SAT} d;
	printf("%d %d %d %d %d %d %d ",SUN,MON,TUE,WED,THU,FRI,SAT);
	
	//enum days d;
	d a=MON;
	printf("\n%d",++a);
	
	//enum day{SUN=1,MON,TUE,WED=1,THU,FRI,SAT};
	//printf("%d %d %d %d %d %d %d ",SUN,MON,TUE,WED,THU,FRI,SAT);
	
}