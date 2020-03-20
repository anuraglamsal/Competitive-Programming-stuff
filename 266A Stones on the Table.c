//266A Stones on the Table

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*#include <ctype.h>
char *strlwr(char *str){
  unsigned char *p = (unsigned char *)str;
  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }
  return str;
}
char *strupr(char *str){
  unsigned char *p = (unsigned char *)str;
  while(*p){
   *p = toupper((unsigned char)*p);
    p++;
  }
  return str;
}
char* sortChar(char a[], int x){ // a = array, x = distance between elements
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
}
int* sortInt(int a[], int n, int x){  // a = array, n = number of elements, x = distance between elements
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
  int n, c=0;
  char a[n];
  scanf("%d", &n);
  scanf("%s", a);
  for (int i = 0; i < strlen(a) - 1; ++i){
    if (a[i] == a[i+1]){
      c++;
    }
  }
  printf("%d", c);
  return 0;
}

//You just compare 2 characters side by side starting from the beginning. If they are unique, nothing needs to be removed. If they are not
//unique, obviously one of them needs to be removed--doesn't matter which because that's not the question. Then, you keep on doing that
//till the second last and last characters have been compared. 
