//1343B	Balanced Array

#include <stdio.h>
int main () {
  int t, n;
  scanf("%d", &t);
  for (int i = 1; i <= t; ++i){
    int odd = 1, even = 2;
    scanf("%d", &n);
    if ((n/2)%2 != 0){
      printf("NO");
    }
    else{
      printf("YES\n");
      for (int j = 1; j <= n; ++j){
        if (j <= n/2){
          printf("%d ", even);
          if (j%2 != 0){
            even += 2;
          }
          else{
            even += 6;
          }
        }
        else{
          printf("%d ", odd);
          odd += 4;
        }
      }
    }
    printf("\n");
  }
  return 0;
}
