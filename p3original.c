#include<stdio.h>
int input_n()
{
  int x;
  printf("enter the number\n");
  scanf("%d",&x);
  return x;
}
int sum_n(int n)
{
  int sum=0;
  sum=(n*(n+1))/2;
  return sum;
}
void output(int n,int sum)
{
  for(int i=1;i<n;i++)
  {
    printf("%d+",i);

  }
  printf("%d=%d",n,sum);
}
int main()
{
  int n,sm;
  n=input_n();
  sm=sum_n(n);
  output(n,sm);
}  



 