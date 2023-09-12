#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct do
 * d: Pointer to a struct dog
 * @name: The name of the do
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This function initializes the members of a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*Description: This function initializes the members of a struct dog.*/
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
