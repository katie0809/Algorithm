#include <stdio.h>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> m;

int main(){

  int N, M;
  scanf("%d", &N);
  for(int i = 0; i<N; i++){
    int idx = 0, value = 0;
    scanf("%d", &idx);
    m[idx] += 1;
  }
  scanf("%d", &M);
  for(int i = 0; i<M; i++){
    int idx;
    scanf("%d", &idx);
    if(!m.empty()) printf("%d", m[idx]);
    else{
      printf("0");
    }
    if(i!=M-1) printf(" ");
  }

}
