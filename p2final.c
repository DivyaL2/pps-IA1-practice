#include<stdio.h>
int cmp(int a,int b, int c)
{
  if(a>b && a>c)
    {

      return a;
    }
  else
    {
      return c;
    }

  }
  else
  {
    if(b>c)
    {
      return b;

    }
    else
    {
      return c;
    }
  }
}    
 int input()
 {
   int x;
   printf("enter the number\n");
   scanf("%d",&x);
  return x;
 }
 int output(int a,int b,int c,int large)
 {
   printf("%d is the largest of three numbers",large);
 }
 int main()
 {
   int a,b,c,large;
   a=input();
   b=input();
   c=input();
   large=cmp(a,b,c);
   output(a,b,c,large);
   return 0;

 }
