#ifndef _DOG_H
#define _DOG_H

/**
  * struct dog- properties of a dog
  * @name: string variable
  * @age: float variable
  * @owner: string variable
  *
  * Description: defines the name, age and owner of a dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* _DOG_H */
