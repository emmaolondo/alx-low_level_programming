#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - main function to addvalues of an argv
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: sum
 */
int main(int argc, char *argv[])
{
int addition = 0;
int i, j;
if (argc == 1)
{
printf("%d\n", 0);
return (0);
}
for (i = 1; i < argc; i++)
{
for(j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return(1);
}
}
addition += atoi(argv[i]);
}
printf("%d\n", addition);
return(0);
}
