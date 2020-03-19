//96A Football

#include <stdio.h>
#include <string.h>
int main () {
  char s[101];
  int a=0, b=0; //Separate count for '1' and '0'. My code requires this but there is a better solution that uses only one count. It's below.
  scanf("%s", s);
  for (int i = 0; i < strlen(s); ++i){
    if ((s[i]=='0')) {
      a++; //Count for '0'.
      b = 0; //Each time 'a' is incremented, 'b' should be reset obviously.
      if (a==7){ //checking the given condition.
        break; //If it's true, then break the loop as it's already dangerous.
      }
    }
    else {
      b++; //Count for '1'.
      a = 0; //Each time 'b' is incremented, 'a' should be reset obviously.
      if (b==7){ //checking the given condition.
        break; //If it's true, then break the loop as it's already dangerous.
      }
    }
  }
  if ((a == 7) || (b == 7)){ //Now, checking how the loop ended basically. If it ended with one of them having '7' value, then it's dangerous.
    printf("%s", "YES");
  }
  else{ //If not, it's not dangerous.
    printf("%s", "NO");
  }
  return 0;
}

//Better Solution

/*
#include <stdio.h>
#include <string.h>
int main(){
int c = 1;
char f[100];
gets(f);
for(int i = 0; i < strlen(f); i++){
  if(f[i] == f[i+1]){
   c++;
   if(c==7){
     printf("YES");
     return 0;
   }
  }
  else{
    c=1;
  }
}
printf("NO");
return 0;
}
*/
