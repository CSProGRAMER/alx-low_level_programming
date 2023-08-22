/**
 * _strcpy - Copies the string pointed  o hebfe ite oby
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
