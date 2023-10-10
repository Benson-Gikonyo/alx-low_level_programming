#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* *new_dog - creates a new dog
* Description- name and owner have to be stored
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: dog or NULL on failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n_len, o_len;

	n_len = _strlen(name);
	o_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		return (NULL);
	}

	dog->name = (char *) malloc((n_len + 1) * sizeof(char));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = (char *) malloc((o_len + 1) * sizeof(char));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);
}

/**
* _strlen - return the length of a string
* @s: string to be measured
* Return: length
*/

int _strlen(char *s)
{
	int x = 0;
	int length = 0;

	while (s[x] != '\0')
	{
		length++;
		x++;
	}

	return (length);
}

/**
* *_strcpy -  copies the string pointed to by src, including
* the terminating null byte (\0), to the buffer pointed to by dest.
* @dest: destination string
* @src: string to be copied
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int len = 0;
	int y;

	while (src[x] != '\0')
	{
		len++;
		x++;
	}

	for (y = 0; y <= len; y++)
	{
		dest[y] = src[y];
	}

	return (dest);
}
