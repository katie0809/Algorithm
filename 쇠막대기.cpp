#include <stdio.h>
#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main(){

  string s;
  cin >> s;
  int len = s.length();
  stack<char> st;
  int count = 0; //현재 열려있는 쇠막대기
  int sum = 0; //전체 쇠막대기 조각
  for(int i = 0; i<len; i++){
    char tmp = s[i];
    if(tmp == '('){
      st.push(tmp);
    }
    else if(tmp == ')'){
        if(s[i-1] == '('){
          //레이저가 만들어짐
          st.pop();
          count = st.size();
          sum += count;
        }else{
          st.pop(); //??
          sum++;
        }
    }
  }
  cout << sum;
}
