#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;
stack<char> front;
stack<char> back;
char key[1111111];

int main(){

  int N;
  scanf("%d", &N);

  while(N--){
    scanf("%s", key);
    int len = strlen(key);
    for(int i = 0; i<len; i++){
      char tmp = key[i];
      if(tmp == '<'){
        if(!front.empty()){
          char cur = front.top();
          front.pop();
          back.push(cur);
        }else continue;
      }
      else if(tmp == '>'){
        if(!back.empty()){
          char cur = back.top();
          back.pop();
          front.push(cur);
        }else continue;
      }
      else if(tmp == '-'){
        if(!front.empty()) front.pop();
        else continue;
      }
      else{
        front.push(tmp);
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
    printf("\n");
  }
}
