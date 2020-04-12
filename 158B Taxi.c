//158B Taxi

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
  int n, c[4] = {0}, g;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i){ //The key idea to solve this problem without exceeding time limit is to count instead of storing the
                               //input numbers.
    scanf("%d", &g);
    c[g-1] += 1;
  }
  if (c[2] > c[0]){
    c[0] = 0;
  }
  else{
    c[0] = c[0] - c[2];
  }
  if (c[1] % 2 == 0){
    c[1] = c[1]/2;
  }
  else{
    c[1] = (c[1]/2) + 1;
    //printf("%d", c[1]);
    if (c[0] > 1){
      c[0] -= 2;
    }
    else if (c[0] == 1){
      c[0] -= 1;
    }
  }
  if (c[0] % 4 == 0){
    c[0] = c[0] / 4;
  }
  else{
    c[0] = (c[0] / 4) + 1;
  }
  printf("%d", c[3] + c[2] + c[1] + c[0]);
  return 0;
}
