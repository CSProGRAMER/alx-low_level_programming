#include <stdio.h>
#include "dog.h"

int main(void)
{
	    dog_t my_dog;

	        my_dog.name = "Buddy";
		    my_dog.age = 3.5;
		        my_dog.owner = "John";

			    printf("Dog's name: %s\n", my_dog.name);
			        printf("Dog's age: %.1f\n", my_dog.age);
				    printf("Dog's owner: %s\n", my_dog.owner);

				        return (0);
}

