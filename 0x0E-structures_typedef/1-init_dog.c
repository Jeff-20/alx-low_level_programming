#include "dog.h"
#include <stdlib.h>


/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to the structure
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;

}
