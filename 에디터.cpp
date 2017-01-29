#include <stdio.h>
#include <stack>
#include <string.h>
#include <iostream>
using namespace std;
stack<char> front;
stack<char> back;
char sentence[111111];
int N;

int main(){

  memset(&sentence, -1, sizeof(char)*111111);
  scanf("%s", sentence);
  scanf("%d", &N);
  int i = 0;
  for(i = 0; sentence[i] != -1; i++){
    front.push(sentence[i]);
  }
  front.pop();
  while(N--){
    char tmp;
    cin >> tmp;
    if(tmp == 'L'){
      if(front.empty()) continue;
      else{
        back.push(front.top());
        front.pop();
      }
    }else if(tmp == 'D'){
      if(back.empty()) continue;
      else{
        front.push(back.top());
        back.pop();
      }
    }else if(tmp == 'B'){
      if(front.empty()) continue;
      else front.pop();
    }else if(tmp == 'P'){
      char add;
      cin >> add;
      front.push(add);
    }
  }

  while(!front.empty()){
    back.push(front.top());
    front.pop();
  }
  while(!back.empty()){
    printf("%c", back.top());
    back.pop();
  }
}
