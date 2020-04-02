//160A Twins

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
int* sortInt(int a[], int n, int x){ // a = array, n = number of elements, x = distance between elements
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
}
int main () {
  int n, a[100], s1=0, s2=0, c=0;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i){
    scanf("%d", &a[i]);
  }
  sortInt(a, n, 1); //sort (ascending)
  for (int i = n - 1; i >= 0; --i){
    s1+=a[i]; //sum from the biggest as we want to maximize the value while minimizing the number of coins.
    c++;
    for (int j = i - 1; j >= 0; --j){
      s2+=a[j]; //sum all the coins from the coin that we have reached above.
    }
    if (s1>s2){ //Compare
      printf("%d", c);
      return 0;
    }
    s2 = 0;
  }
}
