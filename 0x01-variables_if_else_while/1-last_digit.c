#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Added new header */

/*prints a text according to last number  */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  last_digit = n % 10;
  
  if (last_digit > 5)
    {
      printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
    }
  if (last_digit == 0)
    {
      printf("Last digit of %d is %d and is 0\n", n, lastd);
    }
  if (lastd < 6 && lastd != 0)
    {
      printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
    }

  return (0);
}
  /* return : success */
  return (0);
}
