#include <stdio.h>

/**
 * my_Fun -  function that prints string before the main.c is called
 *
 * Return: void
 */
void my_Fun(void) __attribute__((constructor));

/**
 * my_Fun - implementation
 */
void my_Fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
