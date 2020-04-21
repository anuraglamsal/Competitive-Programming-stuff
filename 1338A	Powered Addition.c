//1338A	Powered Addition

#include <stdio.h>
#include <math.h>
int main () {
  int t, n;
  scanf("%d", &t);
  for (int i = 1; i <= t; ++i){
    long long smallest_number, starting_number;
    int test = 0, T = 0, indication = 0;
    scanf("%d", &n);
    long long arr[n];
    for(int j = 0; j < n; ++j){
      scanf("%lld", &arr[j]);
    }
    for(int k = 0; k < n - 1; ++k){
      if (indication == 0){
        if (arr[k+1] >= arr[k]){
        }
        else{
          indication = 1;
          starting_number = arr[k];
          smallest_number = arr[k];
        }
      }
      if (indication == 1){
        if (arr[k+1] < smallest_number){
          smallest_number = arr[k+1];
        }
        if ((arr[k+1] > starting_number)||(k + 1 == n-1)){
          indication = 2;
        }
      }
      if (indication == 2){
        while (smallest_number < starting_number){
          test++;
          smallest_number += pow(2, test - 1);
        }
        if (test > T){
          T = test;
        }
        test = 0;
        indication = 0;
      }
    }
    printf("%d\n", T);
  }
  return 0;
}
