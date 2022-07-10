# :printer:
# _printf()
> A replicate of the standard printf() function

## Description ##
The standard printf() function helps to display to the user the various characters they input in the argument

## SYNOPSIS ##
```
 #include "main.h"
 int _printf([OPTIONS][ARGUMENTS],...);
 int _printf(const char *string, ...);
```
## SPECIFIER ##

| Specifier | Output                               | Example |
|-----------|--------------------------------------|---------|
| %c        | Print a single **c**haracter         | C, c    |
| %s        | Print a **s**tring of characters     | Hello   |
| %%        | Print a percent sign                 | %       |
| %i        | Print an **i**nteger in base 10      | 1       |
| %d        | Print a **d**ecimal (base 10) number | 1       |

## Example ##

To print your name and the current year
```
#include "main.h"
_printf(" My name is %s, and we are in %d\\n", name, year);

```
## :cowboy_hat_face: How to compile ##
```
gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o testprint
```

## :family_woman_woman_boy: Authors ##
Dylan Anderson
Gem Phan
Karren Nonyta
Holberton School Cohort AUS_18
