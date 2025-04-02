#include <stdio.h>
#include <math.h>
struct _point {
    float x;
    float y;
  };
  typedef struct _point Point;
  Point input()
  {
    Point p;
    scanf("%f %f",&p.x,&p.y);
    return p;
  }
  void dist(Point a, Point b, float *res)
  {
      *res=sqrt(pow((b.x-a.x),2)+ pow((b.y-a.y),2));
  }
  void output(Point a, Point b, float res)
  {
    printf("The Distance between (%f,%f) and (%f,%f) is %f\n",a.x,a.y,b.x,b.y,res);
  }
  int main()
  {
    Point a=input();
    Point b=input();
    float res;
    dist(a,b,&res);
    output(a,b,res);
    return 0;
  }