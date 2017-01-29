#include <stdio.h>
#include <queue>
#include <utility>
using namespace std;
priority_queue<int, vector<int>, greater<int> > pq; //최소힙

int main(){

  int N;
  scanf("%d", &N);
  for(int i = 0; i<N; i++){
    int tmp;
    scanf("%d", &tmp);
    pq.push(tmp);
  }
  int prev = pq.top();
  printf("%d ", prev);
  pq.pop();
  for(int i = 0; i<N; i++){
    if(prev == pq.top()) pq.pop();
    else{
      prev = pq.top();
      printf("%d", pq.top());
      if(i != N) printf(" ");
      pq.pop();
    }
  }
}
