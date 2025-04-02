#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
   scanf("%f %f",x1,y1);
   scanf("%f %f",x2,y2);
   scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
   int r=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
   return r;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
   if(result!=0)
   {
     printf("The points (%f,%f), (%f, %f) and (%f,%f) forms a triangle",x1,y1,x2,y2,x3,y3);
   }
   else
   {
    printf("The points (%f,%f), (%f, %f) and (%f,%f) do not form a triangle",x1,y1,x2,y2,x3,y3);
   }
}
int main()
{
    float x1,x2,x3,y1,y2,y3;
    int result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
