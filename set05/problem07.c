#include<stdio.h>
//A camel has a nice name if it has at least 2 vowels and 2 consonants in it
void input(char *name)
{
   scanf("%s",name);
}
int has_nice_name(char *name)
{
   int res=0;
   int cnt1=0,cnt2=0;
   for(int i=0;name[i]!='\0';i++)
   {
     if (name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'||name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
     {
        cnt1++;
     }
     else
     {
        cnt2++;
     }
   }
   if(cnt1>=2 && cnt2>=2)
   {
    return res=1;
   }
}
void output(char *name ,int res)
{
    if(res==0)
   {  
    printf("The camel Conky not have a nice name");
   }
   else
   {
    printf("The camel Conky has a nice name");
   }
}
int main()
{
    char name[100];
    input(name);
    int res=has_nice_name(name);
    output(name,res);
    return 0;
}