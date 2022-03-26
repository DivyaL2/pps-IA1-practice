
#include<stdio.h>
struct complex
{
  int real,imaginary;
};
typedef _complex Complex;
Complex input_complex()
{
  Complex k;
  scanf("%d%d",&k.real,&k.imaginary);
  return k;
}
int get_n()
{
  int n;
  scanf("%d",&n);
  return n;
}
void input_n_complex(int n,Complex c[n])
{
  for(int i=0;i<n;i++)
  {
    c[i]=input_complex();
  }
}
Complex add_n_complex(int n,Complex c[n])
{
  Complex k;
  k.real=0;
  k.imaginary=0;
  for(int i=0;i<n;i++)
  {
    k.real=k.real+c[i].real;
    k.imaginary=k.imaginary+c[i].imaginary;  
  }
  return k;
} 
void output(int n,Complex c[n],Complex sum)
{
  printf("%d+%di\n",c[0].real,c[0].imaginary);
  for(int i=1;i<n;i++)
  {
    printf("+%d+%di\n",c[i].real,c[i].imaginary);
  }
  printf("=%d+%di\n",sum.real,sum.imaginary);
}
int main()
{
  Complex sum;
  int n;
  printf("enter the number of complex numbers\n");
  n=get_n();
  Complex c[n];
  printf("enter the %d complex numbers(a+ib)in the form(a,b)\n",n);
  input_n_complex(n,c);
  sum=add_n_complex(n,c);
  output(n,c,sum);
  return 0;
}