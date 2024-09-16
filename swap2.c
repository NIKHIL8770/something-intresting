#include<stdio.h>
int main(){
int a;
  scanf("%d",&a);
  int b;
  scanf("%d",&b);
  printf("%d  %d\n",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
  printf("%d  %d\n",a,b);
  return 0;
}