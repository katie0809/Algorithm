#include <stdio.h>
#include <windows.h>
#include <string>

using namespace std;

string str;
char cha[10];
int main(){

  scanf("%s", &str);
  printf("%s\n", str);
  scanf("%s", &cha);
  printf("%s\n", cha);

  string str2 = "hello";
  char hello[10] = "hello";

  // if(cha == str){
  //   printf("same string!\n");
  // }else{
  //   printf("different string!\n");
  // }//실행안됨
  if(cha == str2){
    printf("same string!\n");
  }else{
    printf("different string!\n");
  }//제대로나옴
  if(cha == hello){
    printf("same string!\n");
  }else{
    printf("different string!\n");
  }//잘못나옴

  str2 = hello;
  if(cha == hello){
    printf("same string!\n");
  }else{
    printf("different string!\n");
  }//잘못나옴


  int N;
  scanf("%d", &N);
//종료방지

}
