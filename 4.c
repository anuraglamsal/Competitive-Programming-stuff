//158.A Next Round

#include <stdio.h>
int main (){
  int n, k, a, b, c=0;
  scanf("%d %d", &n, &k);
  for (int i = 1; i <= n; ++i){
    scanf("%d", &a);
    if (a==0){
      break; //As the inputs are already sorted, it's evident that if a 0 occurs, all others are going to be 0 too, thus 'break' is used.
    }
    else if (i<k){
      c++; //When the input is not zero and the input number is less than 'k', obviously the contestant qualifies.
    }
    else if (i==k){
      b = a; //We store the score at the 'k'th position in a variable to tally with the score that comes after it.
      c++; //When the input is not zero and the input number is equal to 'k', obviously the contestant qualifies.
    }
    else if ((i>k)&&(b==a)){
      c++; //When the input is not zero and the input number is greater than 'k' and the input is equal to the score at 'k'th position,
           //, obviously the contestant qualifies.
    }
    else{
      break; //Else, why continue the loop? Break it.
    }
  }
  printf("%d", c);
  return 0;
}
