#if 0
#include <stdio.h>
#include <math.h>
double N;
int n, count, sum, min;



int main(){

    scanf("%lf", &N);

    n = (int)sqrt(N);
    //printf("%d\n", n);
    min = 100000;

    for(int i = n; i > 0; i++){
      for(int j = i-1; j > 0; ){
        sum += j*j;
        if()
      }
    }

    printf("%d", count);
    scanf("%d", &N);

}
#endif

#include <stdio.h>
int N, month, day;
char week[10];
int seven_days[7];
//일주일의 날짜를 저장

int chooseDate(){
  if(week =="Sunday"){
    seven_days[0] = day;
    return 0;
  }
}

void fill_seven_days(int ret){
  for(int i = ret+1; i <7; i++){
    day++;
    seven_days[i] = day;
  }
  for(int j = ret - 1; j >= 0; j--){
    day--;
    seven_days[j] = day;
  }
}

void print_week(){
  for(int i = 0; i<6; i++){
    printf("%d", seven_days[i]);
  }
}

int main(){

  scanf("%d", &N);

  while(N--){
    scanf("%d %d %c", &month, &day, &week); printf("%s", week);
    int ret = chooseDate();
    fill_seven_days(ret);
    print_week();
    printf("\n");  scanf("%d", &N);

  }


}
