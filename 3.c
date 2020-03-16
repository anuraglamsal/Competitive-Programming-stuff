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
