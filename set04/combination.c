#include <stdio.h>
#include <stdlib.h>
void input(int *n, int *r)
{
  scanf("%d %d",n,r);
}
void output(int n,int i,int res)
{
  printf("%dC%d is : %d\n",n,i,res);
}

void compute(int n,int r)
{
  int res=1,i;
    for(i=0;i<=r;i++)
    {
      output(n,i,res);
      res=(res*(n-i))/(i+1);
    }
}
int main()
{
    int n,r;
    input(&n,&r);
    compute(n,r);
    return 0;
}