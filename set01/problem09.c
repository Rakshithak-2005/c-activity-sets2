#include <stdio.h>
float input()
{
   float a;
   printf("enter number:\n");
   scanf("%f",&a);
   return a;
}
float square_root(float n)
{
    float low =0.0,high=n,mid;
    if(n>1)
     {
    while((high-low)>0.00001)
    {
        mid= (low+high)/2;
        if(mid*mid<n)
        {
            low=mid;
        }
        else
        {
            high=mid;
        }
    }
    return mid;
     }
     else
     {
         return 1;
     }
}
void output(float n, float sqrroot)
{
   printf("Square root of %f is %f",n,sqrroot);
}
int main()
{
    float n=input();
    float sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}