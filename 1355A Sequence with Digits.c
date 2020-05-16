#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <math.h>
#define min(a,b) \
  ({ __typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
    _a < _b ? _a : _b; })
#define max(a,b) \
  ({ __typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
    _a > _b ? _a : _b; })
/*char *strlwr(char *str){
  unsigned char *p = (unsigned char *)str;
  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }
  return str;
}*/
/*char *strupr(char *str){
  unsigned char *p = (unsigned char *)str;
  while(*p){
   *p = toupper((unsigned char)*p);
    p++;
  }
  return str;
}*/
/*int cmpfunc (const void * a, const void * b){ //Comparison function for the qsort function.
  if( *(int*)a - *(int*)b < 0 ) // qsort(array, size of array, sizeof(data_type), cmpfunc) format of qsort
    return -1;
  if( *(int*)a - *(int*)b > 0 )
    return 1;
  return 0;
}*/
int main () {
  int t, indication;
  long long x, k, y, digit, mxd, mnd;
  scanf("%d", &t);
  for (int i = 1; i <= t; ++i){
    scanf("%lld %lld", &x, &k);
    indication = 0;
    for (long long j = 2; j <= k; ++j){
      mxd = x % 10;
      mnd = x % 10;
      y = x;
      while (y > 0){
        digit = y % 10;
        if (digit == 0){
          indication = 1;
        }
        y = y/10;
        mxd = max(mxd, digit);
        mnd = min(mnd, digit);
      }
      if (indication == 0){
        x = x + (mxd * mnd);
      }
      else{
        break;
      }
    }
    printf("%lld\n", x);
  }
  return 0;
}
