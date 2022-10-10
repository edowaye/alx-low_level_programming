#ifndef DOG_H
#define DOG_H

/**
  *struct dog - A new type describing a dog
  *
  *@name: element 1 showing name of the dog
  *@age: element 2 showing age of the dog
  *@owner: element 3 showing owner of the dog
  *
  *Return: 0
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  *dog_t - typedef for struct dog
  *
  */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
