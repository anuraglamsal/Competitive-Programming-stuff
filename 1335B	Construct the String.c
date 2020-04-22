//1335B	Construct the String

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
  int t, n, a, b;
  char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
  scanf("%d", &t);
  for (int i = 1; i <=t ; ++i){
    int c = 0;
    scanf("%d %d %d", &n, &a, &b);
    if (a==b){
      for (int j = 0; j < n; ++j){
        printf("%c", alpha[c]);
        c++;
        if (c == 26){
          c = 0;
        }
      }
    }
    else if (b == 1){
      for (int j = 0; j < n; ++j){
        printf("a");
      }
    }
    else{
      char arr[a+1];
      for (int j = 0; j < n; ++j){
        if (j < a){
          if (j < b){
            printf("%c", alpha[j]);
            arr[j] = alpha[j];
          }
          else{
            printf("%c", arr[j-1]);
            arr[j] = arr[j-1];
          }
        }
        else{
          printf("%c", arr[c]);
          c++;
          if (c == a){
            c = 0;
          }
        }
      }
    }
    printf("\n");
  }
  return 0;
}
