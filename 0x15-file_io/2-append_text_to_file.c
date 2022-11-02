#include <sys/types.h>

#include <sys/stat.h>

#include <sys/uio.h>

#include <unistd.h>

#include <fcntl.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: the filename to open and append to
 * @text_content: text to append onto new file
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (*(text_content + len))
		len++;

	err = write(fd, text_content, len);
	close(fd);

	if (err < 0)
		return (-1);

	return (1);
}
