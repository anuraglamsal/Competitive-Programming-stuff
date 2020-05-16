#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
//#include <ctype.h>
//#include <math.h>
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
int cmpfunc (const void * a, const void * b){ //Comparison function for the qsort function.
  if( *(int*)a - *(int*)b < 0 ) // qsort(array, size of array, sizeof(data_type), cmpfunc) format of qsort
    return -1;
  if( *(int*)a - *(int*)b > 0 )
    return 1;
  return 0;
}
int main () {
  int t, a[30], b[30], n, k;
  scanf("%d", &t);
  for (int i = 1; i <= t; ++i){
    int sum = 0;
    scanf("%d %d", &n, &k);
    for (int j = 0; j < n; ++j){
      scanf("%d", &a[j]);
    }
    for (int j = 0; j < n; ++j){
      scanf("%d", &b[j]);
    }
    //printf("%d\n", a[1]);
    qsort(a, n, sizeof(int), cmpfunc);
    qsort(b, n, sizeof(int), cmpfunc);
    //printf("%d\n", a[1]);
    for (int l = 0; l < n; ++l){
      if (l+1 <= k){
        if (a[l] < b[n-1-l]){
          sum += b[n-1-l];
        }
        else{
          sum += a[l];
        }
      }
      else{
        sum += a[l];
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}
