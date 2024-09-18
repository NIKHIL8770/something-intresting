#include<stdio.h>
void hello(n){
  if(n==1000) return;
  printf("%d\n",n);
  hello(n+1);
}
int main(){
 hello(500);
  return 0;
}