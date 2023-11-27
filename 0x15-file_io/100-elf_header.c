#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - print magic byte
 *
 * @h: ELF header
 */

void print_magic(Elf64_Ehdr h)
{
	int printf("  Magic:	");
	for (h = 0; h < EI_NIDENT; h++)
		printf("%2.2x%s", h.e_ident[h], h == EI_NIDENT - 1 ? "\n" : " ");
}


/**
 * main - program
 *
 * @ac: arg count
 * @av: arg vec
 *
 * Return: 1 or 0
 */

int main(int ac, char **av)
{
	int f;
	Elf64_Ehdr h;
	ssize_t b;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	f = open(av[1], O_RDONLY);
	if (f == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	b = read(f, &h, sizeof(h));
	if (b < 1 || b != sizeof(h))
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' &&
			h.e_ident[2] == 'L' && h.e_ident[3] == 'F')
		printf("ELF Header: \n");
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abiversion(h);
	print_type(h);
	print_entrry(h);
	if (close(f))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", f), exit(98);
	return (EXIT_SUCCESS);
}
