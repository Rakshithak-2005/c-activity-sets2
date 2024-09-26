#include <stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n()
{
   int n;
   printf("enter the total number of complex numbers to be added\n");
   scanf("%d",&n);
   return n;
}
Complex input_complex()
{
   Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
     for(int i=0;i<n;i++)
     {
        c[i]=input_complex();
     }
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
  Complex r;
  r.real=0;
  r.imaginary=0;
     for(int i=0;i<n;i++)
     {
        r=add(r,c[i]);
     }
     return r;
}
void output(int n, Complex c[n], Complex result)
{
   for(int i=0;i<n;i++)
   {
    printf("%f+%fi +",c[i].real,c[i].imaginary);
   }
   printf(" is %f+%fi",result.real,result.imaginary);
}
int main()
{
    int n=get_n();
    Complex c[n];
    input_n_complex(n,c);
    Complex result=add_n_complex(n,c);
    output(n,c,result);
    return 0;
}