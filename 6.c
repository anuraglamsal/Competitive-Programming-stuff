//231.A Team

#include <stdio.h>
int main (){
  //This is the solution that I submitted. It's incredibly stupid, but hey, atleast I learnt how fgets works. Kind of.
  /*int n, p=0, a=0;
  scanf("%d\n", &n); //Using '\n' because when we press 'Enter', a '\n' remains in stdin which is not taken in by scanf if you don't mention
                     //it explicitely. Thus, the '\n' will be read by fgets which causes problems.
  char line[7]; //We give our array an extra memory block because each time we store the input as a string using fgets, it also takes the
                //'\n' when we press 'Enter' each time. Thus, if we don't give it extra memory, it evidently doesn't work.
  for (int i = 1; i <= n; ++i){
    fgets(line, sizeof(line), stdin); //Taking the inputs as strings using 'fgets' such that spaces aren't compromised. And also it's better
                                      //apparently.
    //The conditions below are straightforward.
    if (line[0]=='1'){
      p++;
    }
    if (line[2]=='1'){
      p++;
    }
    if (line[4]=='1'){
      p++;
    }
    if (p>=2){
      a++;
    }
    p = 0;
  }
  printf("%d", a);*/

  //This is way more intuitive and better. 
  int n, p, v, t, a=0;
  scanf ("%d", &n);
  for (int i = 1; i <=n; ++i){
    scanf("%d %d %d", &p, &v, &t);
    if (p+v+t >= 2){
      a++;
    }
  }
  printf("%d", a);
  return 0;
}
