#include <stdio.h>
struct num
{
    int num1,num2;
}n1;
int input()
{
    printf("Enter 2 numbers\n");
    scanf("%d",&n1.num1);
    scanf("%d",&n1.num2);
}
int add(int a, int b)
{
   int sum= a+b;
   return sum;
}
void output(int a, int b, int sum)
{
     printf("sum of %d and %d is %d",a,b,sum);
}
int main()
{
    int a=n1.num1;
    int b=n1.num2;
    input();
    int sum=add(a,b);
    output(a,b,sum);
    return 0;
}
