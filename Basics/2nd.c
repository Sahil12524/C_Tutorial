#include <stdio.h>
#include <string.h>
int main()
{
    int age = 0;
    char name[29];
    printf("How old are you?, please enter your age: ");
    scanf("%d", &age);

    while (getchar() != '\n')
        ;

    printf("What's your name?, please enter your name: ");
    // scanf("%s", &name); //white space cant be used such as fname lname.
    fgets(name, 29, stdin);
    name[strlen(name) - 1] = '\0';
    printf("%d", strlen(name));
    printf("\nSo, Hello Mr.%s", name);
    printf("\nOh! so you are %d yrs old, ok! ok! alr!", age);
    return 0;
}
