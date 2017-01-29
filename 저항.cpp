#include <stdio.h>
#include <map>
#include <string>
#include <utility>
#include <iostream>
using namespace std;
pair<int, int> p;
map< string, pair<int, int> > m;

int main(){

long ret = 10;
char color[10];

m["black"] = make_pair(0, 1);
m["brown"] = make_pair(1, 10);
m["red"] = make_pair(2, 100);
m["orange"] = make_pair(3, 1000);
m["yellow"] = make_pair(4, 10000);
m["green"] = make_pair(5, 100000);
m["blue"] = make_pair(6, 1000000);
m["violet"] = make_pair(7, 10000000);
m["grey"] = make_pair(8, 100000000);
m["white"] = make_pair(9,1000000000);

scanf("%s", &color);
ret *= m[color].first;
scanf("%s", &color);
ret += m[color].first;
scanf("%s", &color);
for(int i = m[color].second/10; i > 0; i /= 10){
  ret *= 10;
}
cout << ret <<"\n";
}
