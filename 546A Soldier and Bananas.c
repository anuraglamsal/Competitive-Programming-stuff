//546A Soldier and Bananas

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
  int w, c=0;
  long long k, n, borrow, sum1=0, sum2=0;
  scanf("%lld %lld %d", &k, &n, &w);
  while (sum1 < n){
    sum1 = sum1 + (c+1)*k;
    c++;
  }
  sum1 = sum1 - c*k;
  //printf("%lld %d \n", sum1, c);
  while (c <= w){
    sum2 = sum2 + c*k;
    //printf("%lld \n", sum2);
    c++;
  }
  borrow = sum2 - (n - sum1); //(n-sum1) checks for excess money if left from initial.
  if (borrow < 0){
    printf("%d", 0);
  }
  else{
    printf("%lld", borrow);
  }
  return 0;
}
