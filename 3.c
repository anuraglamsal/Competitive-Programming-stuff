//71A. Way Too Long Words

#include <stdio.h>
#include <string.h>
int main () {
  int n;
  scanf("%d", &n);
  char a[n][101]; //Creating a 2-D array of 'n' rows, each row with 101 memory blocks (one extra for null).
  for (int i = 0; i < n ; ++i){ //Looping 'n' times to scan strings to each row of the array.
    scanf("%s", a[i]); //Scanning the strings to rows.
  }
  for (int i = 0; i < n; ++i){ //Looping 'n' times to work with one row of the array at a time.
    if (strlen(a[i])>10){ //creating the condition mentioned in the question.
      printf("%c%ld%c \n", a[i][0], strlen(a[i])-2, a[i][strlen(a[i])-1]); //if length of the string is > 10.
    }
    else{
      printf("%s \n", a[i]);//else
    }
  }
  return 0;
}

/*#include <stdio.h>
#include <string.h>
int main () {
  int n;
  scanf("%d", &n);
  char a[101];
  for (int i = 0; i < n ; ++i){
    scanf("%s", a);
    if (strlen(a)>10){
      printf("%c%ld%c \n", a[0], strlen(a)-2, a[strlen(a)-1]); 
    }
    else{
      printf("%s \n", a);
    }
  }
  return 0;
}
This is a better way to do the same. I didn't know that when you input a bunch of stuff at once, you can
perform the required operations on those inputs in the same loop, and the outputs of all the individual inputs
show up separately below the inputs in order. (obv., in a lot of conditions, this is not viable, but good to know.)
*/
