#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 *
 * @name: deg name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
