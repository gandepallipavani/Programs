#include <stdio.h>
int main(){
char *materials[] = {  "iron",  "copper",  "gold"};
char *sports[] = { "golf", "hockey", "footballlllll"};

printf("Please remember these materials :\n");
int i ;
printf("size:: %d \n size of sports:: %d \n",sizeof(materials),sizeof(sports));
printf("Size::: %u\n",&materials[0]);
printf("Size::: %u\n",&materials[1]);
printf("Size::: %u\n",&materials[2]);

printf("Size::: %u\n",&sports[0]);
printf("Size::: %u\n",&sports[1]);
printf("Size::: %u\n",&sports[2]);

for (i = 0; i < 3; i++) {
  printf("%s\n", materials[i]);}
  return 0;}
