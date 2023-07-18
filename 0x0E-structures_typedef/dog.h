#ifndef DOG_H
#define DOG_H
/**
* struct dog - dog data
* @name: name of dog
* @age: age of dog
* @owner: name of owner dogs
* Description: Defines metadata about the dog and type of dogs
**/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
