#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to reallocate memory
 * @old_size: size in bytes of allocated memory
 * @new_size: newsize of memory block in bytes
 * Return: void pointer to new allocation of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *my;
unsigned int i;
if (ptr == NULL)
{
my = malloc(new_size);
return (my);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (old_size == new_size)
return (ptr);
my = malloc(new_size);
if (my == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
my[i] = ((char *)ptr)[i];
free(ptr);
return (my);
}
