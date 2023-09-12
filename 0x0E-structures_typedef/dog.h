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
/**
 *  * dog_t - Typedef for struct dog
 *   */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
