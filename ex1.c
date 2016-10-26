#include <stdio.h>
#include <stdlib.h>
main()
{
      int i, j, k;
      
      for (i = 1; i <= 9; i++)
      {
          for (j = 1; j <= 9; j++)
              printf("%d*%d=%5d", i, j, i*j);
          printf("\n");
      }
      system("pause");
}
          
