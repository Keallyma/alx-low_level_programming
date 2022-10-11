#include "dog.h"

/**
 * init_dog - initialize a variable type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char name's dog
 * @age: dog's age
 * @owner: pointer to dog's owner name
 * Return: No
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
