#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - is a doggo
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
