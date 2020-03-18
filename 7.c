//50.A Domino Piling

#include <stdio.h>
int main(){
  int m,n,a11,a12,b11,b12;
  scanf("%d %d", &m, &n);
  a11 = m/2; //Number of dominoes that fit on the 'm' side of the rectange with some squares left.
  a12 = a11 * n; //The total number of dominoes that fit throughout the rectangle with some squares left.
  b11 = n/2; //As some squares are completely empty towards the 'n' side of the rectangle, finding out how many dominoes fit on it.
  b12 = b11 * (m-(a11*2)); //Filling the empty squares left by multiplying 'b11' with the number of empty squares left towards the 'm' side.
  printf("%d", a12 + b12); //Printing total number of dominoes.
  return 0;
}
