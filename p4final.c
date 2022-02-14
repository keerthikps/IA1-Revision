#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter the elements of the array\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n,int a[n],int sum)
{
  for(int i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d\n",a[n-1],sum);
}
int main()
{
  int n;
  n=input_array_size();
  int a[n],sum;
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  out_put(n,a,sum);
  return 0;
}


