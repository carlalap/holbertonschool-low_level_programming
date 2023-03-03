#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog object.
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *mndog;
	char *n, *o;

	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;

	mndog = malloc(sizeof(dog_t));
	if (mndog == NULL)
		return (NULL);
	
	n = (char *)malloc((len1 + 1) * sizeof(char));
	if (n == NULL)
	{
		free(mndog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		n[i] = name[i];
	n[i] = '\0';
	mndog->name = n;
	mndog->age = age;
	
	o = (char *)malloc((len2 + 1) * sizeof(char));
	if (o == NULL)
	{
	free(mndog);
	return (NULL);
	}
	for (i = 0; i < len2; i++)
		o[i] = owner[i];
	o[i] = '\0';
	mndog->owner = o;
	return (mndog);
}
