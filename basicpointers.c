#include<stdio.h>
int main()
{
int x=9;
int* z1 = &x;
int y = 9;
int* z2 = &x;
printf("%p\n",&z1);
printf("%p\n",&z2);
return 0;
}  

