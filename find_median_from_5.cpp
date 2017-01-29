#include <stdio.h>
#define N 1000000
int tmp[5];

void swap(int &x, int &y){

  int tmp = 0;
  tmp = x;
  x = y;
  y = tmp;

}

int find_median(int a[5]){


  int ret = 0;
  //1,2원소 비교
  //3,4원소 비교
  //winner는 2,4번째에 넣어둔다
  if(a[0] > a[1]){
    swap(a[0],a[1]);
  }

  if(a[2] > a[3]){
    swap(a[2],a[3]);
  }

  //2,4원소 비교
  //winner는 4번째에 넣어준다.이제 4번째 원소는 제외
  if(a[1] > a[3]){
    swap(a[1],a[3]);
  }

  //2,3원소비교
  int i_flag = 0;//a<d
  //1,5원소비교
  int ii_flag = 0;//c<e
  //winner는 3,5번째에 넣어준다.
  if(a[1] >= a[2]){
    swap(a[2],a[1]);
    i_flag = 1;
  }

  if(a[0]>=a[4]){
    swap(a[0],a[4]);
    ii_flag = 1;
  }

  if(ii_flag == 0) return a[0];
  else if(i_flag == 0){
    return a[0];
  }else{
    if(a[2] > a[0]) return a[4];
    else return a[0];
  }

}

int main(){

    int a[N] = {4,5,1,2,3,6,8,7,9,10,13,11,15,12,14,18,20,19,17,16};

    for(int i = 0; i < N/5; i++){
      for(int j = 0; j < N; j++){
        tmp[j] =
      }
    }
    int n = 0;
    scanf("%d", &n);


}
