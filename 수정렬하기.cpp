#include <stdio.h>
#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>
using namespace std;

int N;
vector<int> v;

int main(){

  scanf("%d", &N);
  v.resize(N);
  for(int i = 0; i<N; i++){
    scanf("%d", &v[i]);
  }
  //sort(v.begin(), v.end(), greater<int>()); //내림차순 정렬
  sort(v.begin(), v.end()); //오름차순정렬

  for(int i = 0; i<N; i++){
    cout << v[i];
    if(i != N-1) cout << " ";
  }
}
