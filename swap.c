#include<stdio.h>
int main(){
int a;
  scanf("%d",&a);
  int b;
  scanf("%d",&b);
  printf("%d%d\n",a,b);
  int temp = a;
  a = b;
  b = temp;
  printf("%d%d\n",a,b);
  return 0;
}