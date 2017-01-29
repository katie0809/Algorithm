//stl 알고리즘 find()기능 사용예제

#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;

char word[111];
char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n','o', 'p','q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(){
  scanf("%s", word);
  int len = strlen(word);
  for(int i = 0; i<26; i++){
    char * tmp;
    tmp = find(word, word+len, alphabet[i]);
    /*
    find 함수를 배열로 사용하는 경우
    iterator(여기서는 tmp)의 타입은 배열에 들어가는 value 포인터타입이어야 한다.
    즉, 여기서 내가 찾는 배열 word는 char배열이므로 tmp는 char *가 된다.
    원하는 원소를 찾지 못할경우 find는 배열의 마지막 원소보다 하나 더 간 주소를
    리턴하며, 원하는 원소를 찾을 경우 해당 위치의 주소를 반환한다.
    */
    if(tmp == &word[len]) printf("-1");
    else cout << (tmp-word);
    if(i != 25) printf(" ");
  }
}
