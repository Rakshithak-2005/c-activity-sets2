#include <stdio.h>
void input_n_and_r(int *n, int *r)
{
   scanf("%d",n);
   scanf("%d",r);
}
int nCr(int n, int r)
{
    if(n>=r)
   {
    int res,n_fact=1,n_r_fact=1,r_fact=1;
   for(int k=n-r; k>=2;k--)
   {
     n_r_fact*=k;
   }
   for(int j=r;j>=1;j--)
   {
      r_fact*=j;
   }
   for(int i=n;i>=2;i--)
   {
    n_fact*=i;
   }
   res=n_fact/(n_r_fact*r_fact);
   return res;
   }
   else
   {
    return 0;
   }
}
void output(int n, int r, int result)
{
   printf("for n = %d and r = %d, nCr = %d\n",n,r,result);
}
int main()
{
    int n,r;
    input_n_and_r(&n,&r);
    int result =nCr(n,r);
    output(n,r,result);
    return 0;
}
