//50.A Domino Piling

#include <stdio.h>
int main(){
  int m,n,a11,a12,b11,b12;
  scanf("%d %d", &m, &n);
  a11 = m/2; //Number of full dominoes that fit on the above 'm' side of the rectange filling from the leftmost side.
  a12 = a11 * n; //The total number of dominoes that fit throughout the area of the rectangle exactly below 'a11'.
  b11 = n/2; //As some squares may still be completely empty towards the right side of the rectangle, here we're finding out
             //how many dominoes fit on the right 'n' side of the rectangle.
  b12 = b11 * (m-(a11*2)); //Filling* the empty squares by multiplying 'b11' with the number of empty squares left towards the above 
                           //'m' side.
  printf("%d", a12 + b12); //Printing total number of dominoes. *Some squares can't be filled at all even after doing all the above stuff.
  return 0;
}

//It's probably confusing without actually drawing stuff. Also, all the directions that I use like 'leftmost', 'right' are relative.
//It's just how I personally think about area problems. And also, a nice relation comes out of the above concept if you do the math. 
//You'll find that the required number of dominoes comes out to be '(m*n)/2'. You can directly use that to solve this problem.
