#include <stdio.h>
#include <string.h>
bool mod[33];

void solve(int &cur_ret, int num){
  for(int i = 0; i<num; i++){
    if(mod[i] == true){
      //나눠진 적 있는수
      continue;
    }else{
      if(cur_ret % (i+1) == 0){
        cur_ret /= (i+1);
        mod[i] = true;
      }else continue;
    }
  }
}

int main(){

  int a=0, b=0, n=0;
  scanf("%d", &n);

  while(n--){
    memset(&mod, false, sizeof(bool)*33);
    scanf("%d %d", &a, &b);
    int ret = b;
    for(int i = 1; i<a; i++){
      ret *= (b-i);
      solve(ret, a);
    }
    for(int j = 0; j<a; j++)
      if(mod[j] == false)
        ret /= (j+1);

    printf("%d\n", ret);
  }
}
