#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Entry point
 * @name: member
 * @age: member
 * @owner: member
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
