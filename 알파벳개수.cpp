//stl정의 함수 count기능 사용예제
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

char word[111];
char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n','o', 'p','q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int main(){

  scanf("%s", word);
  int len = strlen(word);
  for(int i = 0; i<26; i++){
    int tmp = count(word, word+len, alphabet[i]);
    printf("%d", tmp);
    if(i != 25) printf(" ");
  }
}
