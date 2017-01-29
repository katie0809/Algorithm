#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;
char s[111];

int main(){

  cin.getline(s, 111);
  int len = strlen(s);
  for(int i = 0; i<len; i++){
    if(s[i] == ' ') printf(" ");
    else if(s[i] >= '0' && s[i] <= '9') printf("%c", s[i]);
    else if(s[i] >= 'A' && s[i] <= 'Z')
      {
        s[i] = 65 + ((toascii(s[i]) - 65 + 13) % 26);
        printf("%c", s[i]);
      }
    else
    {
      s[i] = (((s[i] - 'a') + 13) % 26) + 'a';
      printf("%c", s[i]);
    }
  }
}
