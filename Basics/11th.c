#include <stdio.h>
#include <string.h>
int main()
{
    char cars[][10] = {"Ford", "Tesla", "BMW", "Porche"};
    strcpy(cars[0], "Tata");
    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s ", cars[i]);
    }
    return 0;
}