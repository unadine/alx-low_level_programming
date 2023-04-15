#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to reallocate memory
 * @old_size: size in bytes of allocated memory
 * @new_size: newsize of memory block in bytes
 * Return: void pointer to new allocation of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		return (newPtr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	memcpy(newPtr, ptr, (new_size < old_size) ? new_size : old_size);
	free(ptr);
	return (newPtr);
}

