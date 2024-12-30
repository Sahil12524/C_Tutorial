#include <stdio.h>

int main()
{
    double prices[] = {10.50, 20.92, 30.25, 50.36, 60.45, 80.15};
    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("Rs %.2lf\n", prices[i]);
    }
    return 0;
}