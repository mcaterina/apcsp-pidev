#include <stdio.h>

int main()

{
int n = 0;
int div;

printf("Input a divisor less then 100\n");
scanf ("%d:\n", &div);

while (n <= 100)
    {
	n++;
    if (div % n == 0)
	{
	   printf("%d\n",n);
	}
    }
return 0;
}
