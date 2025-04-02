#include <stdio.h>
int input_size()
{
    int s;
    scanf("%d",&s);
    return s;
}
void input_array(int n, int a[n])
{
      for(int i=0;i<=n;i++)
      {
        scanf("%d",&a[i]);
      }
}
int find_largest_index(int n, int a[n])
{
    int l=a[0];
    int in=0;
    for(int i=1;i<=n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
            in=i;
        }
    }
    return in;
}
void output(int index)
{
   printf("The index of the largest number in the array is %d\n",index);
}
int main()
{
    int n=input_size();
    int a[n];
    input_array(n,a);
    int index=find_largest_index(n,a);
    output(index);
    return 0;
}