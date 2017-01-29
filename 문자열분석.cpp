#include <stdio.h>
#include <iostream>

using namespace std;

string sentence;
int alphS, alphL, num, nul; //소문자, 대문자, 숫자, 공백의 개수 저장

int main(){

  while (getline(cin,sentence,'\n')) {
    //한 줄 모두 입력받음
    alphS = alphL = num = nul = 0;
    int len = sentence.length();
    if(len == 0) break;
    for(int i = 0; i<len; i++){
      if(sentence[i] >= 'a' && sentence[i] <= 'z') alphS++;
      else if(sentence[i] >= 'A' && sentence[i] <= 'Z') alphL++;
      else if(sentence[i] == ' ') nul++;
      else num++;
    }
    printf("%d %d %d %d\n", alphS, alphL, num, nul);
  }
  return 0;
}
