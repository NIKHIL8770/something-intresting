#include<stdio.h>
void hello(n){
  if(n==0) return;
  printf("%d\nHELLO WORLD\n",n);
  hello(n-1);
}
int main(){
 hello(1000);
  return 0;
}