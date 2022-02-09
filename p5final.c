#include<stdio.h>
float input()
{
  float x;
  printf("enter the number\n");
  scanf("%f",&x);
  return x;
}
float my_sqrt(float f)
{
  float sqrt;
  float a=f/2;
  float a2=f;
  while (a2!=a)
  {
    a2=a;
    a=(a+(f/a))/2;
  }
}
void output(float n,float sqrt_result)
{
  printf("The square root of %f=%f\n",n,sqrt_result);
}
int main()
{
  int n,sqrt;
  n=input();
  sqrt=my_sqrt(n);
  output(n,sqrt);
  return 0;
}