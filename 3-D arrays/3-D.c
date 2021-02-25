// C Program to store and print 12 values entered by the user


/*int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};  */
#include <stdio.h>
int main()
{
  int test[2][3][2];
int i,j,k;
  printf("Enter 12 values: \n");

  for ( i = 0; i < 2; ++i)
  {
    for ( j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        scanf("%d", &test[i][j][k]);
      }
    }
  }


  printf("\nDisplaying values:\n");
  for ( i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for ( k = 0; k < 2; ++k)
      {
        printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
      }
    }
  }

  return 0;
}
