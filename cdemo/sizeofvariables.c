#include<stdio.h>

int main()
{
  int a = 545;
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));

  char b = 3;
  printf("int a value: %c and size: %d bytes\n", b, sizeof(b));

  float c = 323;
  printf("int a value: %f and size: %d bytes\n", c, sizeof(c));

  double d = 232;
  printf("int a value: %lf and size: %d bytes\n", d, sizeof(d));

}

