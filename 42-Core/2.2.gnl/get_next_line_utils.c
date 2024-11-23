#include "get_next_line.h" // So let's get this bread. This is the header file.

char *ft_substr(char *s, unsigned int start, size_t len) // This is the function we're trying to implement.
{
    char *substr; // this is the substring
    size_t i; // this is the index variable

    if (!s) // Null check
        return (NULL); // obviously, we return NULL
    if (start >= ft_strlen(s)) //if the start is bigger than string length
        return (ft_strdup("")); // we return an empty string, why? because we're not starting from the beginning
    substr = malloc(len + 1); // null terminated memory allocation is a must, boyos!
    if (!substr) // in the event the memory allocation went bust,
        return (NULL); // we return NULL, EDGE CASES PEOPLE!!
    i = 0; // index usually starts at 0, maybe not in some cases, depends on what you're doing
    while (i < len && s[start + 1] != '\0') //begin the loop here, because we're starting from the start index
    {
        substr[i] = s[start + i]; // here we copy the substring
        i++; // loop again!
    }
    substr[i] = '\0'; // null terminator, because we're not savages.
    return (substr); // we return the substring like civilized people.
} // how many lines? 23. Norminette would be proud.

/*So this part is the ft_substr function.
It extracts the substring from the string. Exactly what it says on the tin.*/

char    *ft_strdup(const char *s) // This is the function we dig our own hole into because we used in ft_substr.
{
    char *dup; // this is the duplicate string
    size_t i; // index, bois, index.

    if (!s) // ALWAYS NULL CHECK
        return (NULL); // Do it, or you'll regret it.
    dup = malloc(ft_strlen(s) + 1); // memory allocation, null terminated, because we're not savages.
    if (!dup) // you get the drill by now, right?
        return (NULL); // return NULL, because we're not savages.
    i = 0; // again, index usually starts at 0, drill it into your head.
    while (s[i] != '\0') // Start the loop, because we're copying the string
    {
        dup[i] = s[i]; // copy the string
        i++; // loop again!
    }
    dup[i] = '\0'; // null terminator, because we're not savages.
    return (dup); // return the duplicate string, like civilized people.
} //18 lines. Suck it , Norminette

/*So this part is the ft_strdup function.
 it duplicates the string. Exactly what it says in the name.*/

char    *ft_strjoin(char *s1, char *s2)
{
        int             total_len; // total length of the string
        char            *dest; // destination string
        int             i; // indeex, bois, index.
        int             j; // more index bois, why? because we're joining strings.

        i = 0; // index usually starts at 0, drill it into your head.
        j = 0; // index usually starts at 0, drill it
        if (!s1 || !s2) // NULL CHECK, ALWAYS NULL CHECK
                return (NULL); // return NULL, got it?
        total_len = ft_strlen(s1) + ft_strlen(s2); //i've explained this before, right?
        dest = (char *)malloc(sizeof(char) * (total_len + 1)); // oh, look, memory allocation
        if (!dest) // you get the drill, right?
                return (NULL); // return the slab, i mean, NULL
        while (s1[i] != '\0') // the first loop
        {
                dest[i] = s1[i]; // this copies the first string
                i++; // loop again!
        }
        while (s2[j] != '\0') // the second loop
                dest[i++] = s2[j++]; // what does this do? it copies the second string
        dest[i] = '\0'; // null terminator, because we're not idiots
        free(s1); // donr hoard memory, free it
        return (dest); // return the destination string
} // barely 25 lines. Norminette wouldve cooked me alive.

/*So this part is the ft_strjoin function. It copies the strings,
joins the strings, and returns the result. As advertised on TV.*/


size_t ft_strlen(const char *s)
{
    size_t len = 0; // Initialize the length to 0 because? its a good practice.

    if (!s) // If you dont take care of the edge cases, the edge cases will take care of you.
        return 0; // you're not a savage, you return 0.
    while (s[len] != '\0') // start the loop, because we're counting the string length
        len++; // count them characters, boi!
    return len; // give em the length, dont be stingy.
}
