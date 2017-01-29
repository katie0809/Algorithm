#include <stdio.h>
#include <queue>
using namespace std;

int main(){

  priority_queue<unsigned int, vector<unsigned int>, greater<unsigned int> > pq;

  unsigned int num;
  scanf("%d", &num);

  while(num--){
    unsigned long long tmp;
    scanf("%lld", &tmp);

    if(tmp == 0){
      if(pq.empty()) printf("0\n");
      else{
        printf("%d\n", pq.top());
        pq.pop();
      }
    }
    else{
      pq.push(tmp);
    }
  }
  return 0;
}
