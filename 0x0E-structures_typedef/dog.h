#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a Dog definition
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Dog Definition
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
