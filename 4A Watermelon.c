//4A. Watermelon

#include <stdio.h>
int main (){
  int w;
  scanf("%d",&w);
  if ((w%2 != 0) || (w == 2)){
    printf("NO");
  }
  else{
    printf("YES");
  }
  return 0;
}

//I realized that odd numbers cannot be broken down into the sum of two even numbers. Thus, odd numbers should always give "NO".
//But you can build up an even number through the sum of both two even numbers and two odd numbers. I just needed to think about an even number
//that can only be broken down into the sum of two odd numbers. I realized that only '2' exhibits such property. Thus, '2' should give "NO"
//and all other even numbers should give "YES".
