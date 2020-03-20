//236A Boy or Girl

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/*char *strlwr(char *str){
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
}*/
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
/*int* sortInt(int a[], int n, int x){ //a = array, n = number of elements, x = distance between elements
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
  char a[101];
  int c = 1;
  scanf("%s", a);
  sortChar(a, 1);
  for (int i = 0; i < strlen(a) - 1; ++i){
    if (a[i] != a[i+1]){
      c++;
    }
  }
  if (c%2==0){
    printf("CHAT WITH HER!");
  }
  else{
    printf("IGNORE HIM!");
  }
  return 0;
}

//The idea is to sort the characters first. When you do that, all the same characters are side by side. Now, the counting of the
//total number of unique characters becomes way easier. I already had a character sort function so this was very easy. 
