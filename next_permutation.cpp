#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
 int arr[] = { 1, 2, 3, 4 };

 const int N = sizeof(arr) / sizeof(int);
 do{
  for (int i = 0; i < N; i++)
  {
   cout << arr[i];
  }
  cout << endl;
} while (next_permutation(arr, arr + N));
 return 0;
}
