//122A Lucky Division
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
int main () { //It's easy to figure out all the numbers to check with. Thus, comparing the given number to them directly is easier/better.
  int n, c = 0, a, b;
  scanf("%d", &n);
  int arr[2] = {4, 7};
  for (int i = 0; i<=1; ++i){
    if ((c == 1)||(n%arr[i]==0)){
      printf("YES");
      c = 1;
      break;
    }
    for (int j = 0; j<=1; ++j){
      a = 10 * arr[i] + arr[j];
      if ((n%a==0)||(c==1)){
        c = 1;
        break;
      }
      for (int k = 0; k <=1; ++k){
        b = 10 * a + arr[k];
        if (n%b==0){
          c = 1;
          break;
        }
      }
    }
  }
  if (c == 0){
    printf("NO");
  }
  return 0;
}
