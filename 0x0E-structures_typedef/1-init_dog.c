
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - functi that initialize a variable struct dog
 * @d: pointer with address of dog.
 * @name: Second member.
 * @age: Third member.
 * @owner: owner of dog.
 */




void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)

	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}
