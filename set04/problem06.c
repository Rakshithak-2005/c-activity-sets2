#include <stdio.h>
#include <string.h>
void input_string(char *string)
{
    scanf(" %[^\n]", string);
}
int count_words(char *string)
{
     char *token=strtok(string," ");
     int cnt=0;
     while(token!=NULL)
     {
        cnt++;
        token=strtok(NULL," ");
     }
     return cnt;
}
void output(char *string, int no_words)
{
   printf("The number of words is %d",no_words);
}
int main()
{
    char string[100];
    input_string(string);
    int no_words=count_words(string);
    output(string,no_words);
    return 0;
}