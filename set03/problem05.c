#include <stdio.h>
#include <math.h>
int input_array_size()
{
     int a;
     scanf("%d",&a);
     return a;
}
void init_array(int n, int a[n])
{
     for(int i=0;i<n;i++)
     {
        a[i]=i+2;
     }
}
void erotosthenes_sieve(int n, int a[n])
{
   n++;int i,t;
     for(i=0;i<=sqrt(n);i++)
     {
        for(;a[i]==-1;i++);
        for(int k=a[i]+a[i]; k<=n ;k+=a[i])
        { 
           a[k-2]=-1;
        }
     }    
 }  
void output(int n, int a[n])
{
   for(int i=0;i<n;i++)
   {
    if(a[i]!=-1)
       printf("%d ",a[i]);
   }
   printf("\n");
}
int main()
{
    int n;
    n=input_array_size();
    n--;
    int a[n];
    init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}

