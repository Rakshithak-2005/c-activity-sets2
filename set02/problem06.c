#include <stdio.h>
#include <string.h>

void input_string(char *a)
{
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str)
{
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        rev_str[i] = str[n - i - 1];  
    }
    rev_str[n] = '\0';  
}

void output(char *a, char *reverse_a)
{
    printf("Original: %s\n", a);
    printf("Reversed: %s\n", reverse_a);
}

int main()
{
    char a[100], rev_str[100];

    input_string(a);            
    str_reverse(a, rev_str);     
    output(a, rev_str);         

    return 0;
}
