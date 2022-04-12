#include <stdlib.h>
#include "dog.h"

/**
  * init_dog- initializes a variable of type struct_dog
  * @name: string variable
  * @age: float variable
  * @owner: float variable
  * @d: struct dog variable
  *
  * Return: NULL
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	/* Dereference the pointer */
	ptr = d;

	/* Access elements and assign to the other variables */
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
}

