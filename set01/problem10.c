#include <stdio.h>
void input_two_strings(char *string1, char *string2)
{
    scanf("%s",string1);
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
   int i,n;
   for(i=0; string1[i]== string2[i]&&string1[i]!='\0';i++);
   n=string1[i]-string2[i];
   return n;
}
void output(char *string1, char *string2, int result)
{
    if (result == 0)
        printf("%s and %s are equal.\n",string1,string2);
    else if (result > 0)
         printf("%s is greater than %s \n",string1,string2);
    else
        printf("%s is lesser than %s \n",string1,string2);
}
int main()
{
    char string1[100] , string2[100];
    input_two_strings(string1,string2);
    int result=stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}