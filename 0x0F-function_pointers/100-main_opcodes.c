#include <stdlib.h>
#include <stdio.h>

/**
 *opcode - peints rhe opcodes of ots main function
 *@fun: a pointer to a function
 *@byte: number of bytes to be printed
 *
 *
 *Return: Void
 */
void opcode(char *fun, int byte)
{
int i;
for (i = 0; i < byte ; i++)
{
printf("%.2hhx", fun[i]);
if (i < (byte -1))
{
printf(" ");
}
}
printf("\n");
}

/**
 *main - Main function
 *@argc: argument count
 *@argv: argument vector
 *
 *
 *Return: 0
 */
int main(int argc, char **argv)
{
int num;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("Error\n");
exit(2);
}
opcode((char *)&main, num);
return (0);
}
