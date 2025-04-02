#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n()
{
   int n;
   scanf("%d",&n);
   return n;
}
Triangle input_triangle()
{
   Triangle t1;
   scanf("%f",&t1.altitude);
   scanf("%f",&t1.base);
   return t1;
}
void input_n_triangles(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        t[i]= input_triangle();
    }
}
void find_area(Triangle *t)
{
    t->area=0.5*t->altitude*t->base;
}
void find_n_areas(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
   Triangle min = t[0];  
   for(int i = 1; i < n; i++) 
   {
       if (t[i].area < min.area)
       {
           min = t[i];  
       }
   }
   return min;
}

void output(int n, Triangle t[n], Triangle smallest)
{
   printf("The smallest triangle out of triangles is the triangle having base %f, height %f and area %f",smallest.base,smallest.altitude,smallest.area);
}
int main()
{
    int n=input_n();
    Triangle t[n],smallest;
    input_n_triangles(n,t);
    find_n_areas( n, t);
    smallest=find_smallest_triangle(n,t);
    output(n,t,smallest);
    return 0;
}