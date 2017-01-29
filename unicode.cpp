#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

  string str = "안녕";
  char ch[2];

  for(int i = 0; i<2; i++){
    ch[i] = '안';
  }

  cout << str;
  
  cin >> str;

  return 0;
}
