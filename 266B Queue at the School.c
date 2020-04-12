//266B Queue at the School

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
/*char* sortChar(char a[], int x){ // a = array, x = distance between elements
  char temp;
  for (int i = 0; i < strlen(a); i+=x){
    for (int j = i; j > 0; j-=x){
      if (a[j]<a[j-x]){
        temp = a[j-x];
        a[j-x] = a[j];
        a[j] = temp;
     }
    }
  }
  return a;
}*/
/*int* sortInt(int a[], int n, int x){ // a = array, n = number of elements, x = distance between elements
  int temp;
  for (int i = 0; i < n; i+=x){
    for (int j = i; j > 0; j-=x){
      if (a[j]<a[j-x]){
        temp = a[j-x];
        a[j-x] = a[j];
        a[j] = temp;
     }
    }
  }
  return a;
}*/
int main () {
  long long n;
  int t;
  scanf("%lld %d", &n, &t);
  char a[n+1];
  //for (int i = 0; i < n; ++i){
  scanf("%s", a);
  //}
  for (int i = 0; i < t; ++i){
    for (int j = 0; j < n-1; ++j){
      if ((a[j] == 'B')&&(a[j+1] == 'G')){
        a[j] = 'G';
        a[j+1] = 'B';
        j++;
      }
    }
  }
  printf("%s", a);
  return 0;
}
