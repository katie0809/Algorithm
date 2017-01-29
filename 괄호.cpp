#include <stack>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){

  int N;
  string line;
  scanf("%d\n", &N);
  
  for(int i = 0; i<N; i++){

    cin >> line;
    int len = line.length();
    stack<char> s;
    bool flag = true;

    for(int j = 0; j<len; j++){
      char tmp = line[j];
      if(tmp == '('){
        if(s.top() == ')'){
          flag = false;
          goto END;
        }else s.push(line[j]);
      }else{
        if(s.top() == '(' && !s.empty()) s.pop();
        else{
          flag = false;
          goto END;
        }
      }
    }
END:
    if(!s.empty() || flag == false) printf("NO\n");
    else printf("YES\n");
  }
}
