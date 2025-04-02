#include <stdio.h>
#include <math.h>
struct camel {
	float radius, height, length,weight;
};
typedef struct camel Camel;
Camel input()
{
   Camel c;
   scanf("%f",&c.radius);
   scanf("%f",&c.height);
   scanf("%f",&c.length);
   return c;
}
float find_weight(Camel c)
{
   c.weight=3.142*(pow(c.radius,3))*(sqrt(c.height * c.length));
  return c.weight;
}
void find_weights(Camel *c)
{
    c->weight=3.142*(pow(c->radius,3))*(sqrt(c->height * c->length));
} 
void output(Camel c)
{
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f\n",c.radius,c.height,c.length,c.weight);
}
int main()
{
    Camel c;
    c=input();
   c.weight=find_weight(c);
   find_weights(&c);
   output(c);
    return 0;
}