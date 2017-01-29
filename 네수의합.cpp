#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

int main(){

  unsigned long long A,B,C,D;

  scanf("%ull %ull %ull %ull", &A, &B, &C, &D);

  for(unsigned long long i = B; i<1; i = i/10){
    A *= 10;
    break;
  }

  printf("%ull, %ull", A, B);
  scanf("%ull %ull %ull %ull", &A, &B, &C, &D);

//  C = pow(10, strlen(D)) * C;
//  D = D + C;

//  printf("%ull", B+D);
}
