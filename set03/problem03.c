#include <stdio.h>
int input_number()
{
    int a;
    scanf("%d",&a);
    return a;
}
int is_prime(int n)
{
    if(n==1||n==0)
    return 0;
     int cnt=0;
    if(n==2)
    {
        return 0;
    }
    if(n%2==0)
    {
        return 1;
    }
    for (int i=3;i<=n/2;i+=2)
    {
        if(n%i==0)
        {
            cnt++;
            break;
        }
    }
    return cnt;
}
void output(int n, int result)
{
   if(result>0)
   printf("%d is not a prime",n);
   else
   printf("%d is a prime",n);
}
int main()
{
    int n,result;
    n=input_number();
    result=is_prime(n);
    output(n,result);
    return 0;
}