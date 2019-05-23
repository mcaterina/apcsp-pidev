#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;

  // if statement to test is a is equal to 0
  if (a == b)
  {
    printf("a is b\n");
  }
  else
  {
    printf("a is not b\n");
  }

  if (a != b)
  {
    printf("a is not b\n");
  }
  else
  {
    printf("a is b\n");
  }

  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is less than or equal to b\n");
  }

  if (a >= b)
  {
    printf("a is grater than or equal to b\n");
  }
  else
  {
    printf("a less than b\n");
  }

  if (a == 0 && b == 0)
  {
    printf("a and b equal 0\n");
  }
  else
  {
    printf("a and be do not equal 0\n");
  }

  if (a == 0 || b == 0)
  {
    printf("either a or b equal 0\n");
  }
  else
  {
    printf("neither a nor b equal 0\n");
  }

  if !(b == 0)
  {
    printf("b is not 0\n");
  }
  else
  {
    printf("b is 0\n");
  }
}

