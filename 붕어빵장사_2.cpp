#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int price[1111]; //가격
int board[1111]; //최대수익
int N;
void printArray(){
  for(int i = 1; i<=N; i++)
    printf("[%d] %d\n", i, board[i]);
}
int max(int a, int b){
  if(a < b) return b;
  else return a;
}
int solve(int idx){
//  printArray();
  if(idx == 1)
    return price[1];

  int &ret = board[idx];
  if(ret != -1) return ret;

  ret = price[idx];

  for(int i = 1; i<idx; i++)
  ret = max(ret, solve(idx - i) + solve(i));

  return ret;
}

int main(){

  memset(&board, -1, sizeof(int)*1111);
  scanf("%d", &N);
  for(int i = 1; i<=N; i++){
    cin >> price[i];
  }
  printf("%d", solve(N));
}
