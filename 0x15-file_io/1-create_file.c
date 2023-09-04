#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: file name to create
 * @text_content: text to add to the new file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int nwr, nletters, fd;

	nwr = nletters = fd = 0;
	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fd < 0)
			return (-1);
	while (text_content && text_content[nletters])
		nletters++;

	nwr = write(fd, text_content, nletters);
	if (nwr < 0)
		return (-1);

	close(fd);
	return (1);
}
