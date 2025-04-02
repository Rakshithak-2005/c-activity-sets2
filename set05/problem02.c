#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length)
{
    scanf("%f",radius);
    scanf("%f",height);
    scanf("%f",length);
}
float find_weight(float radius, float height, float length)
{
  float weight=3.142*(pow(radius,3))*(sqrt(height * length));
  return weight;
}
void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f\n",radius,height,length,weight);
}
int main()
{
    float radius,height,length;
    input_camel_details(&radius, &height, &length);
    float weight=find_weight(radius,height,length);
    output(radius,height,length,weight);
    return 0;
}