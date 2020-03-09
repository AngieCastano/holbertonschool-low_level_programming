#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t new = {name, age, owner};

	return (new);
}
