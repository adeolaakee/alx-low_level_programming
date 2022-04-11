#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a new type  called struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of he dog
 *
 * Description: this struct provides details of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
