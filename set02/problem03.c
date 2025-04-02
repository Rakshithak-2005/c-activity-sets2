#include <stdio.h>
int input_number()
{
   int num;
   scanf("%d",&num);
   return num;
}
int is_composite(int n)
{
   int cnt=0;
  for(int i=1;i<=n/2;i++)
  {
     if(n%i==0)
     cnt++;
  } 
  return cnt; 
}
void output(int n, int result)
{
   if (result>2)
   printf("%d is a composite number.",n);
   else
   printf("%d is not a composite number.",n);
}
int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}