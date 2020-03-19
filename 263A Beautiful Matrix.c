//263A Beautiful Matrix

#include <stdio.h>
#include <stdlib.h>
int main (){
  char s[11];
  int r1, r2=0, c=-1;
  for (int i = 1; i <= 5; ++i){
    fgets(s, 11, stdin); //Taking the inputs as strings.
    if (r2 == 0){ //Using this condition prevents extra looping.
      for (int j = 0; j < 9; j+=2){ //As taking the inputs as strings also takes whitespaces, we are skipping them by using 'j+=2'.
        if (s[j] == '1'){ //Checking the condition given by the question.
          r1 = abs(3 - (j - c)); //Finding the number of column jumps to be done. 'c' is the correction term for whitespaces.
          r2 = abs(3 - i); //Finding the number of row jumps to be done. Now, when we know 'r1' and 'r2', this loop isn't required.
        }
        c++; //The correction term's sequence is -1, 0, 1, 2, 3.
      }
    }
    c = -1; //Reseting 'c' for each input.
  }
  printf("%d", r1 + r2);
  return 0;
}
