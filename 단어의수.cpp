#include <stdio.h>
#include <iostream>
using namespace std;

string sentence;
int ret, len;

int main(){

  getline(cin,sentence,'\n');
  //전체 문장을 받아온다.

  int len = sentence.length();
  bool flag = false;

  for(int i = 0; i<len; i++){
    if(sentence[i] == ' '){
      flag = false;
      continue;
    }else if(flag == false && sentence[i] != ' '){
      ret++;
      flag = true;
    }else flag = true;
  }

  printf("%d", ret);
}
