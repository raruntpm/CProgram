//Declaration: div_t div(int numerator, int denominator); 


  #include <stdlib.h>
  #include <stdio.h>

  int main(void)
  {
    div_t n;

    n = div(10, 3);

    printf("Quotient and remainder: %d %d.\n", n.quot, n.rem);

    return 0;
  }

         
/*
Quotient and remainder: 3 1.
*/         
