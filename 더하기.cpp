#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

char sentence[111];
char num[10];
int ret, len, sum, idx;

int main(){

  memset(&sentence, ' ', sizeof(char)*111);
  while(cin.eof() == 0)
  {
    cin.getline(sentence,111);
    //전체 문장을 받아온다.
    len = strlen(sentence);

    for(int i = 0; i<len; i++){
      if(sentence[i] == ','){
        char * ptr;
        ptr = num;
        sum += atoi(ptr);
        memset(&num, ' ', sizeof(char)*10);
        idx = 0;
      }
      else{
        num[idx] = sentence[i];
        idx++;
      }
    }
  }
  char * ptr;
  ptr = num;
  sum += atoi(ptr);
  printf("%d", sum);
}
