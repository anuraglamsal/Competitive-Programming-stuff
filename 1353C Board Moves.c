#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
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
/*int cmpfunc (const void * a, const void * b){ //Comparison function for the qsort function.
  if( *(int*)a - *(int*)b < 0 ) // qsort(array, size of array, sizeof(data_type), cmpfunc) format of qsort
    return -1;
  if( *(int*)a - *(int*)b > 0 )
    return 1;
  return 0;
}*/
int main () {
  int t, n;
  scanf("%d", &t);
  for (int i = 1; i <= t; ++i){
    long long moves = 0;
    long long x;
    scanf("%d", &n);
    for (int j = n; j > 3; j-=2){
      x = ((long long)j+1)/2;
      moves += ((x-1)*8) + ((x-2)*(x-1)*8);
    }
    if (n == 1){
      printf("0\n");
    }
    else{
      printf("%lld\n", moves+8);
    }
  }
  return 0;
}
