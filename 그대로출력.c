#include <stdio.h>

int main(){

  char c; // EOF : End of file
  while((c = getchar()) && c != EOF)
    printf("%c", c);
  return 0;
}
