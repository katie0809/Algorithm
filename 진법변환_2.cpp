#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <stack>
using namespace std;
stack<int> ret;
char num[11];
int B;

long long int pow(int B, int j){

  if(j == 0) return 1;
  int ret = 1;
  while(j--){
    ret *= B;
  }
  return ret;
}

long long int _atoi(int len){
  long long int ret = 0;
  for(int i = len-1, j = 0; i >= 0; i--, j++){
    ret += (int)(num[i]-48) * pow(10, j);
  }
  return ret;
}

int main(){

  scanf("%s %d", num, &B);
  int len = strlen(num);
  long long int N = _atoi(len);
  while(N > 0){
    long long int remainder = 0;
    remainder = N % B;
    ret.push(remainder);
    N /= B;
  }
  while(!ret.empty()){
    int tmp = 0;
    tmp = ret.top();
    ret.pop();
    if(tmp >= 10){
      char ch = (char)(tmp + 55);
      printf("%c", ch);
      continue;
    }
    printf("%d", tmp);
  }
}
