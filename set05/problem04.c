#include <stdio.h>
/*sick when its stomach_radius is less than height and less than length
happy when its height is less than length and less than stomach_radius.
tense when its length is less than height and stomach_radius.*/
void input_camel_details(float *radius, float *height, float *length)
{
    scanf("%f",radius);
    scanf("%f",height);
    scanf("%f",length);
}
int find_mood(float radius, float height, float length)
{
   int mood;
   if(radius<height && radius<length)
   {
    mood=1;
   }
   else if(height<length && height <radius)
   {
    mood=2;
   }
   else if(length<height && length<radius)
   {
    mood=3;
   }
   else
   {
     mood=4;
   }
   return mood;
}
void output(float radius, float height, float length, int mood)
{
   switch(mood)
   {
    case 1: printf("The Camel is Sick\n"); break;
    case 2: printf("The Camel is Happy\n"); break;
    case 3: printf("The Camel is Tense\n"); break;
    default: printf("Can't define camel's emotion\n"); break;
   }
}
int main()
{
    float radius,height,length;
    input_camel_details(&radius, &height, &length);
    int mood=find_mood(radius,height,length);
    output(radius,height,length,mood);
    return 0;
}