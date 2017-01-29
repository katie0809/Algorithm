#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

vector< pair<int,int> > v;
pair<int, int> point;

int main(){
  int N;
  scanf("%d\n", &N);

  for(int i = 0; i<N; i++){
    int x,y;
    scanf("%d %d", &x, &y);
    point = make_pair(x, y);
    v.push_back(point);
  }
  sort(v.begin(), v.end());
  for(int i = 0; i<N; i++)
   printf("%d %d\n", v[i].first, v[i].second);
}
