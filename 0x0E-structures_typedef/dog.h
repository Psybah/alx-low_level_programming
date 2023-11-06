#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog with a name, age, and owner.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
