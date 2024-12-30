#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age = 21;
    char alphabet = 'S';
    float number = 18.2;
    char name[] = "Sahil";
    double numbers = 18.2;
    bool isMale = true;
    char tilda = 126;      // -128 to 127 (1 byte)
    unsigned char g = 255; // 0 to 255 (1 byte) unsigned makes the use of only positive numbers and doubles the range of positive numbers. 128+127=255
    long long int LLI = 9999999999999999999U;
    unsigned int unsignedInt = 2603747839;
    short h = 13825;
    unsigned short us = 9999;

    printf("Int age is %d", age);
    printf("\nChar alphabet is %c", alphabet);
    printf("\nFloat number is %f", number);
    printf("\nArray of Char name is %s", name);
    printf("\nDouble numbers are %lf", numbers);
    printf("\nBool isMale %d", isMale);
    printf("\nChar tilda %c", tilda);

    /*
    age += 2
    age -= 2
    age *= 2
    age /= 2
    age %= 2
    */
    return 0;
}