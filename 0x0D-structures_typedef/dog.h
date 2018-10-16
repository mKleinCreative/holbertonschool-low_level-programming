#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - is a doggo
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
