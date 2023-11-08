#include "dog.h"
#include <stddef.h>
#include "main.h"
/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: The name to assign to the dog
 * @age: The age to assign to the dog
 * @owner: The owner's name to assign to the dog
 *
 * Description: This function initializes the members of a struct dog with the
 * provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
