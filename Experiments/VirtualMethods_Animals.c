#include <stdio.h>

typedef struct Animal
{
    char *name;
    void (*speak)(struct Animal *self);
} Animal;

typedef struct
{
    Animal base;
    int bones;
} Dog;

void dog_speak(Animal *a)
{
    Dog *d = (Dog *)a;
    printf("%s says: Woof! (has %d bones)\n", d->base.name, d->bones);
}

typedef struct
{
    Animal base;
    int miceCaught;
} Cat;

void cat_speak(Animal *a)
{
    Cat *c = (Cat *)a;
    printf("%s says: Meow! (caught %d mice)\n", c->base.name, c->miceCaught);
}

int main()
{
    Dog d = {{"Buddy", dog_speak}, 3};
    Cat c = {{"Kitty", cat_speak}, 7};

    Animal *zoo[] = {(Animal *)&d, (Animal *)&c};
    for (int i = 0; i < 2; i++)
        zoo[i]->speak(zoo[i]);

    return 0;
}