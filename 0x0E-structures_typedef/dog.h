#ifndef DOG_H
#define DOG_H

/**
* struct dog - description of pet
* @name: pet name
* @age: pet age
* @owner: pet owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - typedef for struct dog
*/

typedef struct dog dog_t;
