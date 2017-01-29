#include <stdio.h>
#include <algorithm>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;

string words[22222];

bool cmp(string &first, string &second){
  int len1 = 0, len2 = 0;
  len1 = first.length();
  len2 = strlen(second.c_str());

  if(len1 < len2) return true;
  else if(len1 == len2 && first != second)
    return first < second;
  else return false;

}

int main(){

  int N;
  scanf("%d", &N);
  for(int i = 0; i<N; i++){
    cin >> words[i];
  }
  sort(words, words+N, cmp);
  for(int i = 0; i<N; i++){
    if(words[i] == words[i+1]) continue;
    else cout << words[i] << endl;
  }
}
