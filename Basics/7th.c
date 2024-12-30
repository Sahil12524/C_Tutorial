#include <stdio.h>
double square(double x)
{
    return x * x;
}
int main()
{
    double x = square(12524.12524);
    printf("%lf", x);
    return 0;
}