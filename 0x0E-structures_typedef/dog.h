#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - check the code.
 *
 * @name: check the parameters.
 *
 * @age: check the parameters.
 *
 * @owner: check the parameters.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* ifndef _DOG_H_ */
