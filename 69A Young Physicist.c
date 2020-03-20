//69A Young Physicist

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
  int n, x, y, z, s1 = 0 , s2 = 0, s3 = 0;
  scanf("%d", &n);
  for (int i=1; i<=n; ++i){
    scanf("%d %d %d", &x, &y, &z);
    s1 += x;
    s2 += y;
    s3 += z;
  }
  if ((s1 == 0)&&(s2 == 0)&&(s3 == 0)){
    printf("YES");
  }
  else {
    printf("NO");
  }
  return 0;
}

//If there is 0 force on any axis, the body is in equilibrium. That means, find the sum of all x, all y and all z points. If all
//three of them are 0, then the body is in equilibrium. 
