//1A. Theatre Square

#include <stdio.h>
int main () {
  long long int n, n1, m, m1, a, number;
  scanf("%lld %lld %lld", &n, &m, &a);
  if (n%a == 0){
    n1 = n/a;
  }
  else{
    n1 = (n/a)+1;
  }
  if (m%a == 0){
    m1 = m/a;
  }
  else{
    m1 = (m/a)+1;
  }
  number = n1 * m1;
  printf("%lld", number);
  return 0;
}

//The problem is straightforward if you know the definition of 'Area'. Generally, 'Area' of an object is the number of unit squares that you
//can fit in the object. Here, the reference square can be of any size 'a*a' i.e. it doesn't have to be a unit square, and we don't care about
//them exactly fitting in the object. Basically, the rectangle sould be fully filled by the reference squares, but we shouldn't break them i.e.
//they can exceed the boundaries of the rectangle. The first and second wrongs were just stupid mistakes. The third and fourth wrongs happened
//because I didn't know that 'long int' cannot fit 10^18 digits. You should use 'long long int'.
