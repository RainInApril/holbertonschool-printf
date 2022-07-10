# :printer:
# _printf()
> A replicate of the standard printf() function

## Description ##
The standard printf() function helps to display to the user the various characters they input in the argument

## Sypnosis ##
```
 #include "main.h"
 int _printf([OPTIONS][ARGUMENTS],...);
 int _printf(const char *string, ...);
```
## Specifier ##

| Specifier | Output                               | Example |
|-----------|--------------------------------------|---------|
| %c        | Print a single **c**haracter         | C, c    |
| %s        | Print a **s**tring of characters     | Hello   |
| %%        | Print a percent sign                 | %       |
| %i        | Print an **i**nteger in base 10      | 1       |
| %d        | Print a **d**ecimal (base 10) number | 1       |

## Example ##

File main.c used for testing
```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}

```
### :cowboy_hat_face: How to compile ###

We used the following command to compile the test file
```
gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o testprint
```
### Outcome ###

Expected output
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
```

## :family_woman_woman_boy: Authors ##
Dylan Anderson
Gem Phan
Karren Nonyta
Holberton School Cohort AUS_18
