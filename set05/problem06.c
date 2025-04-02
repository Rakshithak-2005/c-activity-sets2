#include <stdio.h>
int input_n()
{
   int n;
   scanf("%d",&n);
   return n;
}
void input(int n, int a[n])
{
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
}
float odd_average(int n, int a[n])
{
   float avg=0;
   int sum=0,cnt=0;
   for(int i=0;i<n;i++)
   {
     if(a[i]%2!=0)
     {
       sum=sum+a[i];
       cnt++;
     }
   }
   avg=(float)sum/cnt;
   return avg;
}
void output(float avg)
{
  printf("Average of all the odd elements is: %f",avg);
}
int main()
{
   int n=input_n();
   int a[n];
   input(n,a);
   float avg=odd_average(n,a);
   output(avg);
    return 0;
}