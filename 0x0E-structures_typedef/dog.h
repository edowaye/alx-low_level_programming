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
  *pup - typedef for struct dog
  *
  */

typedef struct dog pup
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *p);
void old_dog(struct dog *p, char *name, float age, char *owner);
pup *new_dog(char *name, float age, char *owner);
void black_dog(pup *p);

#endif /*DOG_H*/
