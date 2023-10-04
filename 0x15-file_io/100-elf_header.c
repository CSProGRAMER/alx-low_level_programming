#include "main.h"
#include <fcntl.h>
#include <elf.h>
/**
 * print_elf_header - Prints information from the ELF header.
 * @elf_header: A pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS64
			? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			elf_header->e_ident[EI_DATA] == ELFDATA2LSB
			? "2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			elf_header->e_type == ET_REL ? "REL (Relocatable file)"
			: (elf_header->e_type == ET_EXEC ?
				"EXEC (Executable file)" : (elf_header->e_type
					== ET_DYN ? "DYN (Shared object file)"
					: "Unknown")));
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)elf_header->e_entry);
}

/**
 * elf_header - Displays information from the ELF header.
 * @filename: The name of the ELF file.
 * Return: 0 on success, 98 on error.
 */
int elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file '%s'\n", filename);
		return (98);
	}

	bytes_read = read(fd, &elf_header, sizeof(elf_header));
	if (bytes_read == -1 || bytes_read != sizeof(elf_header) ||
			elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file: '%s'\n", filename);
		close(fd);
		return (98);
	}

	printf("ELF Header:\n");
	print_elf_header(&elf_header);

	close(fd);
	return (0);
}
