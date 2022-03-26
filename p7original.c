#include<stdio.h>
struct complex
{
  int real,imaginary;
};
struct complex input_chellox()
{
  struct complex k;
  scanf("%d %d",&k.real,&k.imaginary);
  return k;
}
struct complex add_cmplx(struct complex a,struct complex b)
{
  struct complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(struct complex a,struct complex b,struct complex c)
{
  printf("(%d+%di)+(%d+%di)is(%d+%di)\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  struct complex a,b,c;
  printf("enter the first complex number a+bi in the form 'a b;\n");
  a=input_chellox();
  printf("enter the first complex number a+bi in the form 'a b'\n");
  b=input_chellox();
  c=add_cmplx(a,b);
  output(a,b,c);

}
