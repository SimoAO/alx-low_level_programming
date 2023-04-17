#ifndef DOG_H
#define DOG_H

/**
 * DOG - typedef for struct dog
 */

typedef struct dog DOG;

/**
 * struct dog - structure definition of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
DOG *new_dog(char *name, float age, char *owner);
void free_dog(DOG *d);

#endif
