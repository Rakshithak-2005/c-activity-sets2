#include <stdio.h>
int input_array_size()
{
   int a;
   scanf("%d",&a);
   return a;
}
void input_array(int n, int a[n])
{
   for(int i=1;i<=n;i++)
   {
    scanf("%d",&a[i]);
   }
}
int sum_n_array(int n, int a[n])
{
    int sum=0;
   for(int i=1;i<=n;i++)
   {
     sum=sum+a[i];
   }
   return sum;
}
void output(int n, int a[n],int sum)
{
  printf("The sum of %d numbers which are\n",n);
  for(int i=1;i<=n;i++)
  {
    printf("%d\n",a[i]);
  }
  printf("total sum of these is %d",sum);
}
int main()
{
    int n=input_array_size();
    int a[n];
    input_array(n,a);
    int sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}