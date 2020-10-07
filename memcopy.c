//Declaration:  void *memcpy(void *to, const void *from, size_t count); 
//Return:       returns *to.


#include <ctype.h>
#include <stdio.h>
#include <string.h>

  int main(void)
  {
    char buf[23],buf1[23];
   strcpy (buf,"hello world\n");
   memcpy (buf1, buf, 23);
   printf(buf1);
  }
