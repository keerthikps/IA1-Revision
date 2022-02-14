#include<stdio.h>
float input()
{
  float n;
  printf("Enter a number\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float x,y,e;
  x=n;
  y=1;
  e=0.000001;
  while(x-y>e)
  {
    x=(x+y)/2;
    y=n/x;
  }
  return x;
}
void output(float n, float sqrt_result)
{
  printf("Square root of %f is %f\n",n,sqrt_result);
}
int main()
{
  float n,x;
  n=input();
  x=my_sqrt(n);
  output(n,x);
  return 0;
}



