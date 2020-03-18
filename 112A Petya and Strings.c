//112.A Petya and Strings

#include <stdio.h>
#include <string.h>
/*#include <ctype.h>
char *strlwr(char *str){
  unsigned char *p = (unsigned char *)str;
  while (*p){
     *p = tolower((unsigned char)*p);
      p++;
  }
  return str;
}*/
int main(){
  char a[2][101]; //Is it good to use two 1-D arrays rather than one 2-D array here? 
  scanf("%s %s", a[0], a[1]);
  strlwr(a[0]); //converting the letters to lowercase to make things easy for us.
  strlwr(a[1]);
  for (int i = 0; i < strlen(a[0]); ++i){ //Looping through all characters of the strings.
    if (a[0][i] == a[1][i]){ //This first checks the first characters of both strings.
      if (strlen(a[0])-1 == i){ //If the first characters are equal, then it checks if the length of the strings is 1.
        printf("%d", 0); //If it is 1, then obviously the strings are equal.
      }
      else{
        continue; //Else, you go to the beginning of the loop as it's still not sure if the strings are equal, but it might still be.
                  //Then the above condition is checked for the second characters too and so on.
      }
    }
    else if (a[0][i] > a[1][i]){ //If the strings aren't equal at all, the other conditions are self-evident. 
      printf("%d", 1);
      break;
    }
    else{
      printf("%d", -1);
      break;
    }
    return 0;
  }


  return 0;
}
