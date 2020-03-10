#ifndef _DOG_H_
#define _DOG_H_
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - type struct
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);
#endif
