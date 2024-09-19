#include <stdio.h>
int input()
{
    int a;
    scanf("%d",&a);
    return a;
}
int add(int a, int b)
{
   int sum= a+b;
   return sum;
}
void output(int a, int b, int sum)
{
     printf("The sum of %d and %d is %d",a,b,sum);
}
int main()
{
    int a=input();
    int b=input();
    int sum=add(a,b);
    output(a,b,sum);
    return 0;
}
