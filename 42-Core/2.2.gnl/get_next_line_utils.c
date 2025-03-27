#include "get_next_line.h"

// Helper: Safely joins two strings and frees the old buffer
char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = (char *)malloc(1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	i = -1;
	while (s1[++i])
		result[i] = s1[i];
	j = -1;
	while (s2[++j])
		result[i + j] = s2[j];
	result[i + j] = '\0';
	free(s1);
	return (result);
}

// Helper: Extracts a substring (line until '\n')
char	*ft_substr(char *s, size_t start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

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


// Helper: Extracts a substring (line until '\n')
char	*ft_substr(char *s, size_t start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
