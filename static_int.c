#include <stdio.h>

void f(void);

int main(void)
{
  f();

  return 0;
}

void f(void)
{
  static int s = 0;

  s++;
   
  if(s == 10) 
      return;
  printf("%d ", s);
  f(); /* recursive call */
}
