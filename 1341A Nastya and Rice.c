//1341A Nastya and Rice

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
  int t, n, a, b, c, d;
  scanf("%d", &t);
  for (int i = 1; i <= t; ++i){
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    if ((a+b)*n<c-d){
      printf("No\n");
    }
    else if ((a+b)*n == c-d){
      printf("Yes\n");
    }
    else {
      if ((a-b)*n <= c+d){
        printf("Yes\n");
      }
      else{
        printf("No\n");
      }
    }
  }
  return 0;
}
