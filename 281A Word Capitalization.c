//281A Word Capitalization

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/*
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
}*/
int main () {
  char t;
  for (int i = 1; i <= 1000; ++i){
    scanf("%c", &t);
    if ( i == 1 ){
      printf("%c", toupper(t));
    }
    else if (t != '\n'){
      printf("%c", t);
    }
    else{
      break;
    }
  }
  return 0;
}

//This is pretty easy. Take the inputs as characters. Use the toupper() function on the first character. And take characters until
//new line is encountered, then close the loop.
