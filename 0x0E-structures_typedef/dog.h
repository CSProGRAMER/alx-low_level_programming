#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's characteristics
 * @name: The name of the dog (string)
 * @age: The age of the dog (float)
 * @owner: The owner of the dog (string)
 * Description: This structure defines a dog's characteristics including
 * its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */