#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

struct student{

  char name[11];
  int korean;
  int english;
  int math;

};

bool cmp_name(student &a, student &b){

	int i=0;
	while(u_name[i]==v_name[i])
	{
		i++;
	}
	if(u_name[i]<v_name[i])
		return true;
	else
		return false;

}

/*
bool cmp_name(student &a, student &b){

  for(int i = 0; i<11; i++){

    char a_name = a.name[i];
    char b_name = b.name[i];

    if(a.name[i] >= 'A' && a.name[i] <= 'Z'){
      //대문자는 소문자로 변환하여 비교
      a_name = a.name[i] + 32;
    }
    if(b.name[i] >= 'A' && b.name[i] <= 'Z'){
      //대문자는 소문자로 변환하여 비교
      b_name = b.name[i] + 32;
    }
    if(a_name == b_name){
      if(toascii(a_name) == 0) return true;
      else continue;
    }
    else if(a_name > b_name) return false;
    else if(a_name < b_name) return true;
  }
}
bool cmp(student &a, student &b){

  //국어점수가 감소하는 순서로 = 국어점수 높은애 먼저
  if(a.korean > b.korean) return true;
  else if(a.korean == b.korean){
    if(a.english == b.english){
      if(a.math == b.math){
        return cmp_name(a, b);
      }
      else return a.math > b.math;
    }
    else  return a.english < b.english;
  }
  else return false;
}
*/

bool cmp(student &a, student &b)
{
	if (a.korean > b.korean)
		return true;
	else if (a.korean == b.korean && a.english != b.english)
		return a.english < b.english;
	else if (a.korean == b.korean && a.english == b.english && a.math != b.math)
		return a.math > b.math;
	else if (a.korean == b.korean && a.english == b.english && a.math == b.math)
    return cmp_name(a, b);
  else return false;
}

int main(){

  int N;
  scanf("%d", &N);
  vector<student> v;
  v.resize(N);

  for(int i = 0; i<N; i++)
    scanf("%s %d %d %d", &v[i].name, &v[i].korean, &v[i].english, &v[i].math);

  sort(v.begin(), v.end(), cmp);

  for(int i = 0; i<N; i++){
    printf("%s", v[i].name);
    if(i<N) printf("\n");
  }
}
