#include <stdio.h>
#include <deque>
#include <utility>
using namespace std;

deque< pair<int,int> > balloon;
deque<int> ret;
pair<int, int> p;

int main(){

 int N;
 scanf("%d", &N);
 for(int i = 1; i <= N; i++){
   int tmp = 0;
   scanf("%d", &tmp);
   p = make_pair(i, tmp); //first_idx, second_value
   balloon.push_back(p);
   }

   while(ret.size() != N){

     int move = balloon.front().second;
     ret.push_back(balloon.front().first);
     balloon.pop_front();

     if(move > 0){
       move--;
       for(int i = 0; i<move; i++){
         pair<int,int> tmp = balloon.front();
         balloon.pop_front();
         balloon.push_back(tmp);
       }
     }
     if(move < 0){
       move *= -1;
       for(int i = 0; i<move; i++){
         pair<int,int> tmp = balloon.back();
         balloon.pop_back();
         balloon.push_front(tmp);
       }
     }

   }
   for(int i = 0; i<N; i++){
     printf("%d", ret.front());
     if(i != N-1) printf(" ");
     ret.pop_front();
   }
}
