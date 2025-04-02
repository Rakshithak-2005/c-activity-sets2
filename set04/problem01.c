#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  scanf("%d %d",num1,den1);
  scanf("%d %d",num2,den2);
}
int gcd(int res_num,int res_den)
{
    if(res_num>res_den)
    {
      while(res_den!=0)
    {
        int c=res_num%res_den;
        res_num=res_den;
        res_den=c;
    }
      return res_num;
    }
    else if(res_num<res_den)
    {
      while(res_num!=0)
    {
       int c=res_den%res_num;
        res_den=res_num;
        res_num=c;
    } 
    return res_den;
   }        
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
     *res_num=(num1*den2)+(num2*den1);
     *res_den=den1*den2;
     int a=gcd(*res_num,*res_den);
      *res_num/=a;
      *res_den/=a;
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
  printf("%d/%d + %d/%d = %d/%d\n",num1,den1,num2,den2,res_num,res_den);
}
int main()
{
    int num1,num2,den1,den2,res_num,res_den;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
    return 0;
}