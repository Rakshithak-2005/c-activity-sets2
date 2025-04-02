#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int num, den;
} Fraction;
Fraction input_fraction()
{
    Fraction f;
    scanf("%d %d", &f.num, &f.den);
   return f;
}
int find_gcd(int a , int b)
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
Fraction add_fractions(Fraction f1, Fraction f2)
{
   Fraction f;
    f.num=(f1.num*f2.den)+(f2.num*f1.den);
    f.den=f1.den*f2.den;
    int gcd=find_gcd(f.num,f.den);
    f.num=f.num/gcd;
    f.den=f.den/gcd;
    return f;
}
void output(Fraction f1, Fraction f2,Fraction f3)
{
  printf("%d/%d + %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den);
}
int main()
{
    Fraction f1, f2,sum;
    f1=input_fraction();
    f2=input_fraction();
    Fraction f3=add_fractions(f1,f2);
    output(f1,f2,f3);
    return 0;
}