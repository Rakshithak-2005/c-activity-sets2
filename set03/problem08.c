#include<stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct point {
    float x,y;
} Point;
typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;
int input_n()
{
  Polygon pp;
  printf("Enter the number of sides of the polygon:\n");
  scanf("%d",&pp.sides);
  return pp.sides;
}
Point input_point()
{
  Point p;
  scanf("%f %f",&p.x,&p.y);
  return p;
}
void input_polygon(Polygon *p)
{
    p->sides=input_n();
   for(int i=0;i<p->sides;i++)
   {
     printf("Enter the coordinates of point %d (x,y):",i);
     p->p[i]=input_point();
   }
}
float find_distance(Point a, Point b)
{
 float distance=sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
 return distance;
}
void find_perimeter(Polygon* p)
{
   Point a,b;
   for(int i=0;i<p->sides;i++)
   {
      p->perimeter+=find_distance(p->p[i],p->p[i+1]);
   }
}
void output(Polygon p)
{
   printf("The perimeter of the polygon is %f\n",p.perimeter);
}
int main()
{
    Polygon p;
    input_polygon(&p);
    find_perimeter(&p);
    output(p);
    return 0;
}