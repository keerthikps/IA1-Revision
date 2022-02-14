#include<stdio.h>
typedef struct _complex
{
  float real,imaginary;
}
Complex;
Complex input_complex()
{
  Complex c;
  printf("Enter the real and imaginary part \n");
  scanf("%f%f",&c.real,&c.imaginary);
  return c;
}
Complex add(Complex a, Complex b)
{
  Complex add;
  add.real=a.real+b.real;
  add.imaginary=a.imaginary+b.imaginary;
  return add;
}
void output(Complex a, Complex b, Complex c)
{
  printf("Sum of %0.1f+%0.1fi and %0.1f+%0.1fi is %0.1f+%0.1fi\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex a,b,sum;
  a=input_complex();
  b=input_complex();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}