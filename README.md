## PRINTF PROJECT


### DESCRIPTION :

The function ```"_printf()"``` sends a formatted string to the standard output.
It works like the function of C library ```"printf()"```.

### TABLE OF CONTENTS :

| Files                                                                                         | Description         |
| --------------------------------------------------------------------------------------------- | ------------------- |
| [main.h](https://github.com/Albaryys/holbertonschool-printf/blob/0948993b9900fec922e76797bd2333c02eff8eed/main.h "Header file")                   | Header file with structure and prototypes        |
| [_printf.c](https://github.com/Albaryys/holbertonschool-printf/blob/0948993b9900fec922e76797bd2333c02eff8eed/_printf.c "_printf function")          | main function of the _printf function     |
| [functions.c](https://github.com/Albaryys/holbertonschool-printf/blob/0948993b9900fec922e76797bd2333c02eff8eed/functions.c "Data type functions") | functions specifiers |
| [_putchar.c](https://github.com/Albaryys/holbertonschool-printf/blob/6636559c257c45943afd877d0013814ddcdae259/_putchar.c "_putchar function")           | _putchar function   |
| [man_3_printf](https://github.com/Albaryys/holbertonschool-printf/blob/0948993b9900fec922e76797bd2333c02eff8eed/man_3_printf "man_3_printf")           | manual of the _printf function   |
| [README.md](https://github.com/Albaryys/holbertonschool-printf/blob/0948993b9900fec922e76797bd2333c02eff8eed/README.md "README.md")           | README of the project _printf   |

### PROTOTYPE :

```
int _printf(const char *format, ...);
```

### COMPILATION COMMAND :

compilation :

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o nameofthefile
```
execution :

```
./nameofthefile
```

### REQUIREMENTS :
- All your files will be compiled on Ubuntu 20.04 LTS using gcc.
- Your code should use the Betty style.
- No more than 5 functions per file.
- Only one project repository per group.

### EXAMPLES :
```
#include "main.h"
_printf("Negative:[%d]\n", -762534);
output : Negative:[-762534]
```

### TESTING :
- ```Betty``` to syntax issues

### MAN PAGE :
```
execution : man ./man_3_printf
```
![image](https://github.com/Albaryys/holbertonschool-printf/blob/e9e2449f848c1ccd34bda69027619b0942b8bc17/Capture%20d%E2%80%99e%CC%81cran%202023-03-30%20a%CC%80%2011.28.49.png)

#### AUTHORS :
Arnaud Tilly and Quentin Rouger C20-Holberton School Laval