#ifndef FUN_POINTER
#define FUN_POINTER

#define size_t unsigned long

int _putchar(char ch);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
