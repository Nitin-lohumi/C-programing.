#include<stdio.h>
//This is fun2() with one parameter
int fun2(int i)
{
  int j=10;
    return j;
}
// This is fun1() with two parameters
int fun1(int x, int y)
{
   int a;
   int b;
   b = fun2(a);
   printf("%d",b);//calling `fun2()` from fun1()
   return b;
}
//This is main() function
int main()
{
 int c=fun2(10,20);

  // calling fun1() from main()
}
