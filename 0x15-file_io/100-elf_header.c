#include "main.h"

/**
 * type - Determines the type of an ELF header
 * @elfhr - pointer to the inbuilt struct features
 *
 */
void type(Elf64_Ehdr *elfhr)
{
	printf("%s", "Type: ");
	switch (elfhr->e_type)
	{
		case ET_NONE:
			printf("Format unkown\n");
			break;
		case ET_DYN:
			printf("A dynamically linkable file\n");
			break;
		case ET_CORE:
			printf("Dump File\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
	}
}

/**
 */

