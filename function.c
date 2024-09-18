#include<stdio.h>
void hello(){
  printf("HELLO WORLD\n12\n34");
  hello();
}
int main(){
 hello();
  return 0;
}
