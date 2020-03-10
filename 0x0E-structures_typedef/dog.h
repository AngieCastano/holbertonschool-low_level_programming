#ifndef _DOG_H_
#define _DOG_H_
struct dog 
{
  char *name;
  float age;
  char *owner;
};
#endif
dog_t *new_dog(char *name, float age, char *owner);
