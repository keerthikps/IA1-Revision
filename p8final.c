#include<stdio.h>
typedef struct _complex
{
float real,imaginary;
}
Complex;
int get_n()
{
  int n;
  printf("Enter the number of complex n umbers to be added\n");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
  Complex c;
  printf("Enter the real and imaginary part \n");
  scanf("%f%f",&c.real,&c.imaginary);
  return c;
}
void input_n_complex(int n, Complex c[n])
{
  for(int i=0;i<n;i++)
  {
    c[i]=input_complex();
  }
}
Complex add(Complex a, Complex b)
{
  Complex add;
  add.real=a.real+b.real;
  add.imaginary=a.imaginary+b.imaginary;
  return add;
}
Complex add_n_complex(int n, Complex c[n])
{
  Complex sum;
  sum.real=0;
  sum.imaginary=0;
  for(int i=0;i<n;i++)
  {
    sum=add(sum,c[i]);
  }
  return sum;
}
void output(int n, Complex c[n], Complex result)
{
  if(n==1)
  {
    printf("%0.2f + %0.2fi is %0.2f + %0.2fi\n",c[0].real,c[0].imaginary,result.real,result.imaginary);
  }
  else
  {
    for(int i=0;i<n-1;i++)
    {
      printf("%0.2f + %0.2fi\n",c[i].real,c[i].imaginary);
    }
    printf("+ %0.2f + %0.2fi is\n%0.2f + %0.2fi\n",c[n-1].real,c[n-1].imaginary,result.real,result.imaginary);
  }
}
int main()
{
  int n;
  Complex result;
  n=get_n();
  Complex c[n];
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}





