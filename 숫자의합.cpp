#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int test_case, sum;
char num[111]; //입력되는 100자리 수를 문자열 배열에 담는다.

int main(){

  scanf("%d\n", &test_case);
  std::cin.getline(num, 111);

  while(test_case--){
    int tmp = 0;
    char tmpchar = num[test_case];
    char * tmpcharr = &tmpchar;
    tmp = atoi(tmpcharr);
    sum += tmp;
    printf("%d %d\n", tmp, sum );
  }
  printf("%d", sum);

}
