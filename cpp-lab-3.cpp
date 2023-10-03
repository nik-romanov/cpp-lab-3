#include <iostream>

using namespace std;

int func( const int n, int arr[], int current = 0, int sum_1 = 0, int sum_2 = 0)
{
   if (current == n)
      return abs( sum_1 - sum_2 );
   else
      {
         return min(
            func(n, arr, current + 1, sum_1 + arr[current], sum_2 ),
            func(n, arr, current + 1, sum_1, sum_2 + arr[current] )
            );
      }
      
}

int main(void)
{
   /* const */int n; cin >> n; int plates[n]; //ввели массив
   for (int i = 0; i < n; ++i){
      cin >> plates[i];
   }
   cout << func(n, plates);
   return 0;
}
