#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c,int largest)
{
  if(a>b&&b>c)
  {
    largest=a;
  }
  else if(b>c)
  {
    largest=b;
  }
  else
  {
    largest=c;
  }
  return largest;
}
void output(int a, int b, int c, int largest)
{
  printf("Largest of %d,%d and %d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c,largest);
  output(a,b,c,largest);
  return 0;
}

