#include <stdio.h>
#include <iostream>

using namespace std;

char sentence[111];

int main(){

  while (cin.eof() == 0) {
    cin.getline(sentence, 111);
    printf("%s\n", sentence);
  }

  return 0;
}
