#include <stdio.h>
#uz sme to fixli takze fejkova zmena pre ulohu...
void hanoi(int n, int a, int b)
{
  if (n == 1) 
    printf("move kamen 1 z %d na %d\n", a, b);
  else
  {
    hanoi(n - 1, a, 6 - a - b);
    printf("posun kamen %d z %d na %d\n", n, a, b);
    hanoi(n - 1, 6 - a - b, b);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}

