#include <stdio.h>
#include <string.h>
#include <string>
#include <map>
#include <iostream>
using namespace std;
map<string, string> dictionary;
char sentence[1111];

int main(){

  scanf("%s", sentence);
  int len = strlen(sentence);
  for(int i = 0; i<len; i++){
    dictionary[sentence+i] = sentence+i;
  }

  map<string, string>::iterator it;
  int i;
  for(it = dictionary.begin(), i = 0; it != dictionary.end(); it++, i++)
  {
//    printf("%s", it->second.c_str());
    cout << it->second;
    if(i != len - 1) printf("\n");
  }
}
