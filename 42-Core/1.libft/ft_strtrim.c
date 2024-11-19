#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int ft_is_in_set(char c, const char *set) {
    while (*set) {
        if (c == *set)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set) {
    char *trimmed;
    size_t start, end, i;

    if (!s1 || !set)
        return NULL;

    start = 0;
    while (s1[start] && ft_is_in_set(s1[start], set))
        start++;

    end = strlen(s1);
    while (end > start && ft_is_in_set(s1[end - 1], set))
        end--;

    trimmed = (char *)malloc(end - start + 1);
    if (!trimmed)
        return NULL;

    i = 0;
    while (start < end)
        trimmed[i++] = s1[start++];
    trimmed[i] = '\0';

    return trimmed;
}
