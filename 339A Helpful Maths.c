//339A Helpful Maths

#include <stdio.h>
#include <string.h>
int main(){
  char s[101], temp;
  scanf("%s", s);
  for (int i = 0; i < strlen(s); i+=2){ //Basic sorting algorithm. We are incrementing/decrementing by '2' as there is a '+' sign between numbers.
    for (int j = i; j > 0; j-=2){
      if (s[j]<s[j-2]){
        temp = s[j-2];
        s[j-2] = s[j];
        s[j] = temp;
      }
      //printf("%s \n", s);
    }
  }
  printf("%s", s);
  return 0;
}
