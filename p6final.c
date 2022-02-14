#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("Enter 2 words\n");
  scanf("%s%s",a,b);
}
int strcmp(char *a,char *b)
{
  int i;
  for(i=0;a[i]&&(a[i]==b[i]);i++);
  return a[i]-b[i];
}
void output(char *a, char *b, int result)
{
  if(result>0)
  {
    printf("%s is greater than %s\n",a,b);
  }
  else if(result<0)
  {
    printf("%s is greater than %s\n",b,a);
  }
  else
  {
    printf("%s is equal to %s\n",a,b);
  }
}
int main()
{
  char a[25],b[25];
  input_two_string(a,b);
  int s;
  s=strcmp(a,b);
  output(a,b,s);
  return 0;
}


