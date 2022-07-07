#include <unistd.h>								
								
/**								
* _putchar - writes the character c to stdout, standard output								
* @c: The character to print								
*								
* Return: 1 if OK ;  -1 if error								
* 								
*/								
int _putchar(char c)								
{								
return (write(1, &c, 1));								
}								
