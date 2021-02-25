#include<stdio.h>
int main() 
{ 
	// Initialize 2D array 
	char colour[4][10] = { "Blue", "Red", "Orange" }; 
	int i;
	// Printing Strings stored in 2D array 
	for (i = 0; i < 4; i++) 
		 printf("%s\n",colour[i]); 
	printf("Size %d",sizeof(colour));
	return 0; 
} 
