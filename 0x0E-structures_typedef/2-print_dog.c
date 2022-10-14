#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
  * print_dog - print the structure dog
  * @d: pointer to the struct in memory location
  *
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
