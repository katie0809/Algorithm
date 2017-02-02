#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char num[333444];

int main(){

  string oct_[8] = {"", "1", "10", "11", "100", "101", "110", "111"};
  string _oct[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};

  scanf("%s", num);
  int len = strlen(num);
  
  cout << oct_[(int)(num[0]-48)];
  for(int i = 1; i<len; i++){
    cout << _oct[(int)(num[i]-48)];
  }
}
