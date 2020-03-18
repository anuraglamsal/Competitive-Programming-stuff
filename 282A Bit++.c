//282.A Bit++

#include <stdio.h>
int main(){
  int n, x=0;
  scanf("%d", &n);
  char s[4];
  for (int i = 1; i <= n; ++i){
    scanf("%s", s);
    if ((s[0] == '+') || (s[1] == '+')) {
      x++;
    }
    else{
      x--;
    }
  }
  printf("%d", x);
  return 0;
}

//Pretty straightforward.
