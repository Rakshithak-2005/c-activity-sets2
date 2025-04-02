#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void input_string(char* string, char* substring)
{
   scanf("%s",string);
   scanf("%s",substring);
}
int sub_str_index(char* string, char* substring)
{
    int len=strlen(substring);
    int len1=strlen(string);
    int cnt=0,i,b=0;
    for(int a=0;a<len1-len+1;a++)
    {
      for(i=a;string[i]==substring[b] && b<len && i<len1;i++,b++)
         {
           cnt++; 
         }
       if(cnt==len)
       {
         return a;
       }
    }
    return -1;
} 
void output(char *string, char *substring, int index)
{
  printf("The index of %s in %s is %d\n",substring,string,index);
}
int main()
{
  char string[100],substring[100];
  input_string(string,substring);
  int index = sub_str_index(string,substring);
  output(string,substring,index);
}