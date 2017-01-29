#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int tmp1[111111];
  unsigned int tmp2[111111];

  srand(time(NULL));

  while(1){
    int tmp;
    tmp = rand() % 10;

    if(tmp > 9 || tmp < 0) printf("%d\n", tmp);
  }

}
