//1339B	Sorted Adjacent Differences

#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b){ //Comparison function for the qsort function.
  if( *(long long int*)a - *(long long int*)b < 0 )
    return -1;
  if( *(long long int*)a - *(long long int*)b > 0 )
    return 1;
  return 0;
}
int main () {
  int t, n, a;
  long long seq[10*10*10*10*10];
  scanf("%d", &t);
  for (int i = 1; i <= t; ++i){
    scanf("%d", &n);
    for (int j = 0; j < n; ++j){
      scanf("%lld", &seq[j]);
    }
    qsort(seq, n, sizeof(long long), cmpfunc); 
    if (n % 2 == 0){
      a = n/2;
    }
    else {
      a = n/2 + 1;
    }
    for (int k = a - 1; k >= 0; --k){
      if ((n%2 != 0)&&(k == a-1)){
        printf("%lld ", seq[k]);
      }
      else{
        printf("%lld %lld ", seq[k], seq[n - 1 - k]);
      }
    }
    printf("\n");
  }
  return 0;
}
