#include "get_next_line.h"

// Core logic: Reads from fd and builds the full buffer
static char	*read_to_buffer(int fd, char *buffer)
{
	char	*chunk;
	int		bytes_read;

	chunk = malloc(BUFFER_SIZE + 1);
	if (!chunk)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(buffer, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, chunk, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(chunk);
			return (NULL);
		}
		chunk[bytes_read] = '\0';
		buffer = ft_strjoin(buffer, chunk);
	}
	free(chunk);
	return (buffer);
}

// Main function
char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	size_t		line_len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_to_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line_len = 0;
	while (buffer[line_len] && buffer[line_len] != '\n')
		line_len++;
	if (buffer[line_len] == '\n')
		line_len++;
	line = ft_substr(buffer, 0, line_len);
	if (!line)
		return (NULL);
	char *new_buffer = ft_substr(buffer, line_len, ft_strlen(buffer) - line_len);
	free(buffer);
	buffer = new_buffer;
	if (buffer && !*buffer)
	{
		free(buffer);
		buffer = NULL;
	}
	return (line);
}
// boii, its barely 25 lines. Norminette wouldnt bitch about this.

/* So basically this part is the main function of the project.
the dreaded get_next_line function. 
I loathe it so much. So what it do? it reads the file in chunks,
based on the set buffer size, until EOL , then stored the read bytes
into a static buffer, and then the line is extracted and returned
the result to the caller. Off to the next one.*/
