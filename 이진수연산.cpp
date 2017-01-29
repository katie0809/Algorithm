#include <stdio.h>
#include <string.h>

char binary_A[111111];
char binary_B[111111];

int main(){

  scanf("%s", binary_A);
  scanf("%s", binary_B);

  for(int i =0; i<100000; i++){
    if(binary_A[i] == '0' || binary_B[i] == '0') printf("0");
    else printf("1");
  }printf("\n");
  for(int i =0; i<100000; i++){
    if(binary_A[i] == '1' || binary_B[i] == '1') printf("1");
    else printf("0");
  }printf("\n");
  for(int i =0; i<100000; i++){

  }
  for(int i =0; i<100000; i++){
    if(binary_A[i] == '1') printf("%s\n", );
  }
  for(int i =0; i<100000; i++){

  }
}
