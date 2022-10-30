#include "dog.h"
#include <stdlib.h>

/**
* new_dog - function that creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner name
* Return: a pointer to a new struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
char *newname, *newowner;
int ln = 0, lo = 0;
int i;

if (name == NULL || owner == NULL)
return (NULL);

while (name[ln])
ln++;
while (owner[lo])
lo++;

p = malloc(sizeof(dog_t));
if (p == NULL)
{
free(p);
return (NULL);
}
newname = malloc(ln + 1);
if (newname == NULL)
return (NULL);
for (i = 0; name[i]; i++)
newname[i] = name[i];
newname[i] = '\0';

newowner = malloc(lo + 1);
if (newowner == NULL)
return (NULL);
for (i = 0; owner[i]; i++)
newowner[i] = owner[i];
newowner[i] = '\0';

p->name = newname;
p->age = age;
p->owner = newowner;

return (p);
}
