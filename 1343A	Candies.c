//1343A	Candies

#include <stdio.h>
#include <math.h>
int main () {
  int t;
  scanf("%d", &t);
  long long n;
  for(int i = 1; i <= t; ++i){
    int t = 2;
    scanf("%lld", &n);
    while(n%(long long)(pow(2, t)-1)!=0){
      t++;
    }
    printf("%lld\n", n/(long long)(pow(2, t)-1));
  }
  return 0;
}
