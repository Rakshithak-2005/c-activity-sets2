#include <stdio.h>
#include <stdlib.h>
typedef struct fraction
{
    int num, den;
} Fraction;

int input_n()
{
  int n;
  scanf("%d",&n);
  return n;
}
Fraction input_fraction()
{
    Fraction f;
    scanf("%d %d", &f.num, &f.den);
   return f;
}
void input_n_fractions(int n, Fraction f[n])
{
    for(int i=0;i<n;i++)
    {
        f[i]=input_fraction();
    }
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
Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction f;
    f.num=(f1.num*f2.den)+(f2.num*f1.den);
    f.den=f1.den*f2.den;
    return f;
}
Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction f1;
    f1=add_fractions(f[0],f[1]);
    for(int i=2;i<n;i++)
    {
      f1=add_fractions(f1,f[i]);
    }
    int gcd=find_gcd(f1.num,f1.den);
    f1.num=f1.num/gcd;
    f1.den=f1.den/gcd;
    return f1;
}
void output(Fraction sum)
{
  printf("the sum of the fractions is %d/%d\n",sum.num,sum.den);
}
int main()
{
    int n=input_n();
    Fraction f[n];
    input_n_fractions(n,f);
    Fraction sum=add_n_fractions(n,f);
    output(sum);
    return 0;
}