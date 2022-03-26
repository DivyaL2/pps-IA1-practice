#include<stdio.h>
#include<string.h>
void input_two_string(char a, char b)
{
  printf("enter the two strings\n");
  scanf("%s%s",a,b);
}
int strcmp(char a, char b)
{ 
  int flag=0;
  for(int i=0;a[i]!=\'0'&& a[i]==b[i];i++);
  {
    if(a[i]!=b[i])
      flag=1;
  }
  return flag;
}
void output(char a, char b, int result)
{
  if(result==1)
  {
    printf("")
  }
}