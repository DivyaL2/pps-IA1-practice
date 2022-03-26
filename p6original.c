#include<stdio.h>

void input_two_string(char *a,char *b)
{
  printf("enter two string\n");
  scanf("%s%s",a,b);
  
}
int strcmp(char *a, char *b)
{ 
  
  for(int i=0;a[i]!='\0'&& a[i]==b[i];i++)
  {
   return a[i]-b[i];
  }
  
}
void output(char *a, char *b, int result)
{
  if(result>1)
  {
    printf("%s is greater than %s\n",a,b);
  }
  else 
  {
    printf("%s is greater than %s\n",b,a);
  }
    
}
int main()
{
  int k;
  char a[15],b[15];
  input_two_string(a,b);
  k=strcmp(a,b);
  output(a,b,k);
  return 0;
}