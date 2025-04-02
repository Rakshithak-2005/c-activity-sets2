#include <stdio.h>
int input()
{
   int n;
   scanf("%d",&n);
   return n;
}
int find_gcd(int a, int b)
{
   int n=0,gcd;
   if(a>b)
   {
      n=b;
   }
   else
   {
      n=a;
   }
   for(int i=1;i<=n/2;i++) 
   {
      if(a%i==0 && b%i==0)
      {
         gcd=i;
      }
   }
   return gcd;
}
void output(int a, int b, int gcd)
{
   printf("%d\n\n",gcd);
}
int main()
{
    int a= input();
    int b= input();
    int gcd= find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}