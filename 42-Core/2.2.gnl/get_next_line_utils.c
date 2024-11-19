#include <stddef.h>
#include <unistd.h>
#include "get_next_line.h"

char *ft_strchr(const char *str, int c)
{
    if (str == NULL)
        return (NULL);

    const unsigned char *ptr;
    unsigned char   chck;

    ptr = (const unsigned char *)str;
    chck = (unsigned char)c;

    
    while (*ptr != '\0' && chck != '\0')
    {
        if (*ptr == chck)
            return (char *)ptr;
        ptr++;
    }
    return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, len1);
	ft_memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';
	return (result);
}

void *ft_memcpy(void *dest, const void *src, size_t size)
{
    if (dest == NULL || src == NULL)
        return NULL;

    unsigned char *dst;
    const unsigned char *source;
    size_t i;

    i = 0;
    dst = (unsigned char *)dest;
    source = (const unsigned char *)src;

    while (i < size)
    {
        dst[i] = source[i];
        i++;
    }
    return dest;
}

char    *ft_strdup(const char *str)
{
    size_t  len;
    size_t  i;
    char    *dup;

    len = 0;
    while (str[len] != '\0')
        len++;
    dup = malloc ((len + 1) * sizeof (char));
    if (!dup)
        return (NULL);
    i = 0;
    while (i <= len)
    {
        dup[i] = str[i];
        i++;
    }
    return (dup);
}

char    *ft_substr(const char *s, size_t start, size_t len)
{
    size_t  s_len;
    char    *substr;
    size_t  i;

    if (!s)
        return (NULL);
    s_len = 0;
    while (s[s_len])
        s_len++;
    if (start >= s_len)
        return (NULL);
    if (start + len > s_len)
        len = s_len - start;
    substr = (char *)malloc(len + 1);
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
