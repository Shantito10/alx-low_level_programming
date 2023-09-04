#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_type - prints the type of an ELF header
 * @e_type: the ELF type
 * @e_ident: a pointer to an array
 */
void print_type(unsigned int e_type, unsigned char e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: switch (e_type")
	{
	case ET_NONE:
		printf("NONE(None)\n");
		break;
	case ET_REL:
		printf("REL(Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC(Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN(Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE(Core file)\n");
		break;
	default:
		printf(" < unkown : % x > \n", e_type);
	}
}
