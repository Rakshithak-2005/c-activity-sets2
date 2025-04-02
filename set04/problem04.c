#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int input_degree()
{
    int i;
    scanf("%d",&i);
    return i;
}
void input_coefficients(int n, float a[])
{
   for(int i=0;i<=n;i++)
   {
    scanf("%f",&a[i]);
   }
}
float input_x()
{
  float x;
  scanf("%f",&x);
  return x;
}
float evaluate_polynomial(int n, float a[], float x)
{
    float s=a[0];
    for(int i=1;i<=n;i++)
    {
      s=(x*s)+a[i];
    }
    return s;
}
void output(int n, float a[], float x, float result)
{
  printf("final answer is:%f\n",result);
}
int main()
{
    int n=input_degree();
    float a[n];
    input_coefficients(n,a);
    float x=input_x();
    float result= evaluate_polynomial(n,a,x);
    output(n,a,x,result);
    return 0;
}
