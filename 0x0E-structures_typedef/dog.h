#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - defines a dog
 * @name: name of the dog
 * @age: how old the dog is
 * @owner: name of the dog's owner
 *
 * Description: keeps track of the information
 * 		pertaining to a dog
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

/* typedef for struct dog*/
typedef struct {
    char *name;
    float age;
    char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif /*_DOG_H_*/
