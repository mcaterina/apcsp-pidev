#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

  printf("%d and %d\n", a, c);

  int t;

  t = a;
  a = c;
  c = t;
  printf("Now\n%d and %d\n", a, c);
}
