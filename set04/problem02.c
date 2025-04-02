#include <stdio.h>
typedef struct fraction{
    int num, den;
} Fraction;
Fraction input_fraction()
{
     Fraction f;
     scanf("%d %d",&f.num,&f.den);
     return f;
}
Fraction find_smallest(Fraction a,Fraction b,Fraction c)
{
  int x=a.num*b.den*c.den;
  int y=b.num*a.den*c.den;
  int z=a.den*b.den*c.num;
   if(x<=y && x<=z)
   {
    return a;
   }
   else if(y<=z)
   {
    return b;
   }
   else
   {
     return c;
   }
}
void output(Fraction res,Fraction a,Fraction b,Fraction c)
{
   printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",a.num,a.den,b.num,b.den,c.num,c.den,res.num,res.den);
}
int main()
{
    Fraction a,b,c,res;
    a=input_fraction();
    b=input_fraction();
    c=input_fraction();
    res=find_smallest(a,b,c);
    output(res,a,b,c);
    return 0;
}