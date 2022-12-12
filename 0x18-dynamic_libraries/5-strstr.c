#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: string to search in
 * @needle: small string to be searched with-in haystack string
 *
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)

{

char *substrHay;

substrHay = strstr(haystack, needle);

return (substrHay);

}
