#include <stdio.h>
int input_array_size()
{
    int n;
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n])
{
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
int sum_composite_numbers(int n, int a[n]) 
{
    int sum = 0;
    for (int i = 0; i < n; i++)
     {
        int cnt = 0;

        for (int j = 1; j <= a[i]; j++) 
        {
            if (a[i] % j == 0)
            {
                cnt++;
            }
        }
        if (cnt > 2) 
        {
            sum += a[i];
        }
    }

    return sum;
}

void output(int sum) 
{
    printf("%d\n", sum);
}

int main() 
{
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}
