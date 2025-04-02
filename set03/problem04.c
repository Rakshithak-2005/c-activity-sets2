#include <stdio.h>
int input()
{
      int a;
      scanf("%d",&a);
      return a;
}
int find_fibo(int n)
{
    int a=0,f,i=1;
    while(i<n)
    {
       f=a+i;     
       a=i;
       i=f;
    }
    return f;
}
void output(int n, int fibo)
{
   printf("fibo(%d) = %d",n,fibo);
}
int main()
{
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}