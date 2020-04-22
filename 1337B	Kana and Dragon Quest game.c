//1337B	Kana and Dragon Quest game

#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
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
  int t, x, lightning;
  scanf("%d", &t);
  long long voida;
  for (int i = 1; i <= t; ++i){
    scanf("%d %lld %d", &x, &voida, &lightning);
    while((x>=20)&&(voida>0)){
      x = (x/2) + 10;
      voida--;
    }
    x -= lightning*10;
    if (x <= 0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
