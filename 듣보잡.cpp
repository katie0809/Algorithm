#include <stdio.h>
#include <string>
#include <algorithm>
#include <map>

using namespace std;
map<string, int> mp;
map<string, string> ret;
int main(){

  char name[22];
  int D, B, sum=0; //듣도못한 인원, 보도못한 인원
  scanf("%d %d\n", &D, &B);

  while(D--){
    scanf("%s", name);
    mp[name] = 1;
  }
  while(B--){
    scanf("%s", &name);
    if(mp[name] == 1){
      sum++;
      ret[name] = name;
    }
  }
  printf("%d\n", sum);

  map<string, string>::iterator it;
  int i;
  for(it = ret.begin(), i = 0; it != ret.end(); it++, i++)
  {
    printf("%s", it->second.c_str());
    if(i != sum - 1) printf("\n");
  }
}
