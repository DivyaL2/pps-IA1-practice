#include<stdio.h>
struct complex
{
  int real,imaginary;
};
typedef _complex Complex;
Complex input_chellox()
{
  Complex k;
  scanf("%d %d",&k.real,&k.imaginary);
  return k;
}
struct complex add_cmplx(Complex a,Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a,Complex b,Complex c)
{
  printf("(%d+%di)+(%d+%di)is(%d+%di)\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex a,b,c;
  printf("enter the first complex number a+bi in the form 'a b;\n");
  a=input_chellox();
  printf("enter the first complex number a+bi in the form 'a b'\n");
  b=input_chellox();
  c=add_cmplx(a,b);
  output(a,b,c);

}
