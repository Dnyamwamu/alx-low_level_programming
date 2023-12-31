#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's information
 * @name: The dog's name (char *)
 * @age: The dog's age (float)
 * @owner: The dog's owner (char *)
 *
 * Description: This structure defines a dog's
 * information including its name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* New type definition */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
