#include <stdio.h>
#include <deque>
using namespace std;
deque<int> d, ret;

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 1; i<=a; i++)
      d.push_back(i);

    while(!d.empty()){
		  int len = b-1;
		  while(len--){
	   	  int tmp = d.front();
	   	  d.pop_front();
	   	  d.push_back(tmp);
	   }
    ret.push_back(d.front());
    d.pop_front();
    }
    printf("<");
    for(int i = 0;i<a-1;i++){
			printf("%d, ", ret.front());
			ret.pop_front();
			}
    printf("%d>", ret.front());

    }
