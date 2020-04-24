//1337A Ichihime and Triangle

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
  int t;
  scanf("%d", &t);
  long long a, b, c, d;
  for (int i = 1; i <=t; ++i){
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if (b+c > d){
      printf("%lld %lld %lld\n", b, c, d);
    }
    //else if (b+c == d){
      //printf("%lld %lld %lld\n", b, c, d-1);
    //}
    else{
      printf("%lld %lld %lld\n", b, c, b+c-1);
    }
  }
  return 0;
}
