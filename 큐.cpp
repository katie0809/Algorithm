#include <stdio.h>
#include <string>
#include <queue>
#include <iostream>
using namespace std;

string order; //명령어
queue<int> q;
int main(){

  int N;
  scanf("%d", &N);
  while(N--){
    cin >> order;
    if(order == "push"){
      int tmp;
      scanf("%d", &tmp);
      q.push(tmp);
    }
    if(order == "pop"){
      if(q.size() == 0) printf("-1\n");
      else{
        int tmp = q.front();
        q.pop();
        printf("%d\n", tmp);}
    }
    if(order == "size"){
      printf("%d\n", q.size());
    }
    if(order == "empty"){
      if(!q.empty()) printf("0\n");
      else printf("1\n");
    }
    if(order == "front"){
      if(!q.empty()) printf("%d\n", q.front());
      else printf("-1\n");
    }
    if(order == "back"){
      if(!q.empty()) printf("%d\n", q.back());
      else printf("-1\n");
    }
  }
}
