#include <stdio.h>
#include <math.h>
void input(int *x)
{
    scanf("%d",x);
}
float borga_X(int x)
{
   float res=1.0;
   float fact=1.0;
   float num=1;
   for(int i=1,j=3;;i++,j=j+2)
   {
      fact= j*(j-1)*fact;
      num=x*num;
      float temp=(num/fact);
      res+=temp;
      if (temp<0.000001)
      {
         return res;
      }
   }
}
void output(int x, float result)
{
   printf("borga(%d) = %f\n",x,result);
}
int main()
{
    int x;
    input(&x);
    float result = borga_X(x);
    output(x,result);
    return 0;
}