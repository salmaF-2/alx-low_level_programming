#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  function that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;
int i = 0, j = 0, k;
while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;
ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
{
free(ndog);
return (NULL);
}
ndog->name = malloc(i *sizeof(ndog->name));
if (ndog->name == NULL)
{
free(ndog->name);
free(ndog);
return (NULL);
}
for (k = 0; k <= i; k++)
ndog->name[k] = name[k];
ndog->age = age;
ndog->owner = malloc(j *sizeof(ndog->owner));
if (ndog->owner == NULL)
{
free(ndog->owner);
free(ndog->name);
free(ndog);
return (NULL);
}
for (k = 0; k <= j; k++)
ndog->owner[k] = owner[k];
return (ndog);
}
