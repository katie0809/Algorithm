#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

string sentence;
//한 줄을 저장하는 입력배열

int main(){

  //cin.getline(sentence, 111);
  cin >> sentence;
  //문자열을 입력받는다.
  int iteration = sentence.length() / 10;

  for(int i = 0; i < iteration; i++){
    for(int j = 0; j<10; j++){
      cout << sentence[i*10 + j];
    }
    cout << "\n";
  }

  //남은 문자열 출력
  for(int k = 0; sentence[iteration*10 + k] != 0; k++)
    cout << sentence[iteration*10 + k];
    
}
