#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to a struct dog variable
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 * Description: This function initializes a struct dog variable with the
 * provided name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
