#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: this is the first member
 * @age: this is the second member
 * @owner: the third member
 *
 * Description: that is Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - is typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
