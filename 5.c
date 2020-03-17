//118.A String Task

#include <stdio.h>
#include <string.h>
/*#include <ctype.h> //Apparently 'strlwr' is not a standard 'C' function. Thus, I had to copy it from somewhere. But Codeforces already has this
                     //included in '<string.h>', so this was only for testing on my computer.
char *strlwr(char *str){
  unsigned char *p = (unsigned char *)str;
  while (*p){
     *p = tolower((unsigned char)*p);
      p++;
  }
  return str;
}*/
int main (){
  char word[101];
  scanf("%s", word);
  strlwr(word); //Converting to lowercase right now as this is viable and makes stuff super easy.
  for (int i = 0; i < strlen(word); ++i){ //Looping the characters of the string.
    if ((word[i] != 'a')&&(word[i] != 'e')&&(word[i] != 'i')&&(word[i] != 'o')&&(word[i] != 'u')&&(word[i] != 'y')){
      //Apparently, when you put something inside double quotes, 'C' thinks that it is a string even though it only has a single character
      //inside it. As we are comparing the letters with single characters from our input string, those letters need to be inside
      //single quotes which 'C' interprets as characters and not string.
      printf(".%c", word[i]); //Printing according to the format given in the question.
    }
  }
  return 0;
}
