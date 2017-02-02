#include <stdio.h>
#include <stdlib.h>

int main()
{
 //소수를 구해서 저장할 변수
 char *arr;
 int n;
 int i,j;

 arr = (char *)malloc(sizeof(char) * 1000001);

 for(i=1;i<1000001;i++)
 {
  arr[i]=1;
 }

 for(i=2;i<1000001;i++)
 {
  if(arr[i]==1)
  {
   for(j=i+i;j<1000001;j=j+i)
    arr[j]=0;
    printf("%d %d\n", i, j);
  }
 }
 while(1){
 START:
   int n;
   scanf("%d", &n);
   if(n == 0) break;

   for(int i = 3; i<n; i++){
     if(arr[i] == 1 && arr[n-i] == 1) {
       printf("%d = %d + %d\n", n, i, n-i);
       goto START;
     }
     else continue;
   }
   printf("Goldbach's conjecture is wrong.\n");
 }

}
