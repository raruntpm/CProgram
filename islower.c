#include <ctype.h>
  #include <stdio.h>

  int main(void)
  {
    char ch;

    for(;;) {
      ch = getchar();
      if(ch == '.'){
         break;
      }
      if(islower(ch)){
         printf("%c is lowercase\n", ch);
      }
    }

    return 0;
  }
