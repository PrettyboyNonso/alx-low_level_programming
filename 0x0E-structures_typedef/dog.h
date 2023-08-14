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

typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
