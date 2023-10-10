#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog's basic information
* @name: name of dog
* @age: age of dog
* @owner: name of dog owner
* Return: 0
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
