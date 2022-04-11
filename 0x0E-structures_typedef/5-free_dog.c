#include <stdlib.h>
#include "dog.h"

/**
 * free_dog  - this function free the content of struct dog
 *
 * @d: the struct to be free
 */

void free_dog(dog_t *d)
{	
	if(d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
