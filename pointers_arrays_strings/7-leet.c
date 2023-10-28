#include "main.h"

/**
* leet - Function that encodes a string to 1337
*@s: String to make 1337
*
* Return: a point the s
*/
char *leet(char *s)
{
char lt[10][2] = {
{'a', '0' + 4}, {'A', '0' + 4},
{'e', '0' + 3}, {'E', '0' + 3},
{'o', '0'}, {'0', '0'},
{'t', '0' + 7}, {'T', '0' + 7},
{'l', '0' + 1}, {'L', '0' + 1}};
int i = 0;
int z = 0;
while (s[i] != '\0')
{
while (lt[z][0] != '\0')
{
if (s[i] == lt[z][0])
s[i] = lt[z][1];
z++;
}
z = 0;
i++;
}
return (s);
}
