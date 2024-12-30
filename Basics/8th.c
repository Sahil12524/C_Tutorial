#include <stdio.h>

int greaterorLesser(int a, int b)
{
    /*
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    */
    return (a > b) ? a : b;
}
int main()
{
    int a = 10, b = 20;
    int max = greaterorLesser(a, b);
    printf("%d", max);
    return 0;
}