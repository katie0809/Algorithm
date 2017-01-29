#include <stdio.h>
#include <deque>
#include <string>
#include <iostream>
using namespace std;
int num; //명령의 개수

int main(){

  deque<int> DQ;
  string str;

  scanf("%d", &num);

  while(num--){
    cin >> str;

    if(str == "push_front"){
      int tmp;
      scanf("%d", &tmp);
      DQ.push_front(tmp);
      continue;
    }else if(str == "push_back"){
      int tmp;
      scanf("%d", &tmp);
      DQ.push_back(tmp);
      continue;
    }else if(str == "pop_front"){
      int tmp;
      if(DQ.size() == 0) printf("-1\n");
      else{
        printf("%d\n", DQ.front());
        DQ.pop_front();
      }
      continue;
    }else if(str == "pop_back"){
      int tmp;
      if(DQ.size() == 0) printf("-1\n");
      else{
        printf("%d\n", DQ.back());
        DQ.pop_back();
      }
      continue;
    }else if(str == "size"){
      printf("%d\n", DQ.size());
      continue;
    }else if(str == "empty"){
      if(DQ.empty()) printf("1\n");
      else printf("0\n");
      continue;
    }else if(str == "front"){
      if (!DQ.empty())
				printf("%d\n", DQ.front());
			else
				printf("-1\n");
      continue;
    }else if(str == "back"){
      if (!DQ.empty())
        printf("%d\n", DQ.back());
      else
        printf("-1\n");
      continue;
    }
  }

  return 0;
}
