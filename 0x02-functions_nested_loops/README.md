 - Functions, nested loops
 At the end of this project you are expected to be able to explain to anyone, without the help of Google:

 -   What are nested loops and how to use them
 -   What is a function and how do you use functions
 -   What is the difference between a declaration and a definition of a function
 -   What is a prototype
 -   Scope of variables
 -   What are the  `gcc`  flags  `-Wall -Werror -pedantic -Wextra`
 -   What are header files and how to to use them with  `#include`
## 0-holberton
 Write a program that prints  `Holberton`, followed by a new line.

 -   The program should return  `0`
## 1-alphabet
 Write a function that prints the alphabet, in lowercase, followed by a new line.

 -   Prototype:  `void print_alphabet(void);`
 -   You can only use  `_putchar`  twice in your code
## 2-print_alphabet_x10
 Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

 -   Prototype:  `void print_alphabet_x10(void);`
 -   You can only use  `_putchar`  twice in your code
## 3-islower
 Write a function that checks for lowercase character.

 -   Prototype:  `int _islower(int c);`
 -   Returns  `1`  if  `c`  is lowercase
 -   Returns  `0`  otherwise

 FYI: The standard library provides a similar function:  `islower`. Run  `man islower`  to learn more.
## 4-isalpha
 Write a function that checks for alphabetic character.

 -   Prototype:  `int _isalpha(int c);`
 -   Returns  `1`  if  `c`  is a letter, lowercase or uppercase
 -   Returns  `0`  otherwise

 FYI: The standard library provides a similar function:  `isalpha`. Run  `man isalpha`  to learn more.
## 5-sign
 Write a function that prints the sign of a number.

 -   Prototype:  `int print_sign(int n);`
 -   Returns  `1`  and prints  `+`  if  `n`  is greater than zero
 -   Returns  `0`  and prints  `0`  if  `n`  is zero
 -   Returns  `-1`  and prints  `-`  if  `n`  is less than zero
## 6-abs
 Write a function that computes the absolute value of an integer.

 -   Prototype:  `int _abs(int);`

 FYI: The standard library provides a similar function:  `abs`. Run  `man abs`  to learn more.
## 7-print_last_digit
 Write a function that prints the last digit of a number.

 -   Prototype:  `int print_last_digit(int);`
 -   Returns the value of the last digit
## 8-24_hours
 Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

 -   Prototype:  `void jack_bauer(void);`
 -   You can listen to  [this soundtrack](https://intranet.hbtn.io/rltoken/CF-MAQgUTibmVPRfQF3VkQ "this soundtrack")  while coding :)
## 9-times_table
 Write a function that prints the 9 times table, starting with 0.

 -   Prototype:  `void times_table(void)`
 -   Format: see example
## 10-add
 Write a function that adds two integers and returns the result.

 -   Prototype:  `int add(int, int);`
## 11-print_to_98
 Write a function that prints all natural numbers from  `n`  to  `98`, followed by a new line.

 -   Prototype:  `void print_to_98(int n);`
 -   Numbers must be separated by a comma, followed by a space
 -   Numbers should be printed in order
 -   The first printed number should be the number passed to your function
 -   The last printed number should be  `98`
 -   You are allowed to use the standard library
## 100-times_table
 Write a function that prints the  `n`  times table, starting with 0.

 -   Prototype:  `void print_times_table(int n)`
 -   If  `n`  is greater than  `15`  or less than  `0`  the function should not print anything
 -   Format: see example
 ```
 n = 3
 0,   0,   0,   0 
 0,   1,   2,   3
 0,   2,   4,   6
 0,   3,   6,   9
 n = 5
 0,   0,   0,   0,   0,   0
 0,   1,   2,   3,   4,   5
 0,   2,   4,   6,   8,  10
 0,   3,   6,   9,  12,  15
 0,   4,   8,  12,  16,  20
 0,   5,  10,  15,  20,  25
 n = 12
 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
 0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
 0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
 0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
 0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
 0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
 0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
 0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
 0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
 0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
 0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
 0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
 0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
 ```
## 101-natural
 If we list all the natural numbers below  `10`  that are multiples of  `3`  or  `5`, we get  `3`,  `5`,  `6`and  `9`. The sum of these multiples is  `23`. Write a program that computes and prints the sum of all the multiples of  `3`  or  `5`  below  `1024`  (excluded), followed by a new line.

 -   You are allowed to use the standard library
