#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  char *p;

  p = malloc(17);
  if(!p) {
    printf("Allocation Error\n");
    exit(1);
  }

  strcpy(p, "This is 16 chars");
  
  /* this is to change the size of memory*/
  p = realloc(p, 18);
  if(!p) {
    printf("Allocation Error\n");
    exit(1);
  }

  strcat(p, ".");

  printf(p);

  free(p);

  return 0;
}
