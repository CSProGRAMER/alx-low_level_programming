#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int main(void)
{
	    dog_t *my_dog;

	        my_dog = new_dog("Buddy", 3.5, "John");
		    if (my_dog == NULL)
			        {
					        printf("Failed to create a new dog\n");
						        return (1);
							    }

		        printf("Dog's name: %s\n", my_dog->name);
			    printf("Dog's age: %.1f\n", my_dog->age);
			        printf("Dog's owner: %s\n", my_dog->owner);

				    /* Don't forget to free the memory when done */
				    free(my_dog->name);
				        free(my_dog->owner);
					    free(my_dog);

					        return (0);
}

