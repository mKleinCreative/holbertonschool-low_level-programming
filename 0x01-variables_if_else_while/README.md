 - Variables, if, else, while
 First, quickly read (again) through  [Everything you need to know to start with C](https://intranet.hbtn.io/rltoken/lbqOMfcseEq0Y-7al_j1Ag "Everything you need to know to start with C"). You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.

 Read or watch  [Keywords and identifiers](https://intranet.hbtn.io/rltoken/H5xB_TuTdxRJH43d3a92ZA "Keywords and identifiers"),  [integers](https://intranet.hbtn.io/rltoken/x-Gz8GZesHnqQiFWExNdNQ "integers"),  [Arithmetic Operators in C](https://intranet.hbtn.io/rltoken/r4hrHzg2X9JjnKj8sP_SAw "Arithmetic Operators in C"),  [If statements in C](https://intranet.hbtn.io/rltoken/40RYNLRh_nrWHRJyNhJryw "If statements in C"),  [if…else statement](https://intranet.hbtn.io/rltoken/PMD6eKdkj2RmIpagtABihw "if...else statement"),  [Relational operators](https://intranet.hbtn.io/rltoken/dCy4644-X_WJMYxRZwCfFQ "Relational operators"),  [Logical operators](https://intranet.hbtn.io/rltoken/ehZitEtcEw_PTx8_1bTh4w "Logical operators"),  [while loop in C](https://intranet.hbtn.io/rltoken/Qhq1p5UcR72-VXFJ_iAqWQ "while loop in C"),  [While loop](https://intranet.hbtn.io/rltoken/RY9a1EDxRKNNHhxbJ6Pn_g "While loop").

 man  `ascii`  and every other man seen previously.

 You do not need to learn about  `scanf`,  `getc`,  `getchar`,  `EOF`,  `EXIT_SUCCESS`,  `time`,  `rand`,  `srand`,  `RAND_MAX`,  `for`  loops,  `do...while`  loops, functions.

### At the end of this project you are expected to be able to explain to anyone,  **without the help of Google**:

 -   What are the arithmetic operators and how to use them
 -   What are the logical operators (sometimes called boolean operators) and how to use them
 -   What the the relational operators and how to use them
 -   What values are considered TRUE and FALSE in C
 -   What are the boolean operators and how to use them
 -   How to use the  `if`,  `if ... else`  statements
 -   How to use comments
 -   How to declare variables of types  `char`,  `int`,  `unsigned int`
 -   How to assign values to variables
 -   How to print the values of variables of type  `char`,  `int`,  `unsigned int`  with  `printf`
 -   How to use the  `while`  loop
 -   How to use variables with the  `while`  loop
 -   How to print variables using  `printf`
 -   What is the  `ASCII`  character set
 -   What are the purpose of the  `gcc`  flags  `-m32`  and  `-m64`
## 0-positive\_or\_negative.c
 This program will assign a random number to the variable  `n`  each time it is executed. Complete the source code in order to print whether the number stored in the variable  `n`  is positive or negative.

 -   You can find the source code  [here](https://intranet.hbtn.io/rltoken/7UBSgP4-dX9UI_R-fz7yYQ "here")
 -   The variable  `n`  will store a different value every time you will run this program
 -   You don’t have to understand what  `rand`,  `srand`,  `RAND_MAX`  do. Please do not touch this code
 -   The output of the program should be:
     -   The number, followed by
             -   if the number is greater than 0:  `is positive`
	             -   if the number is 0:  `is zero`
		             -   if the number is less than 0:  `is negative`
			         -   followed by a new line
## 1-last\_digit.c
				 This program will assign a random number to the variable  `n`  each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable  `n`.

				 -   You can find the source code  [here](https://intranet.hbtn.io/rltoken/oFiQttJDmwMElxNT6fqSiA "here")
				 -   The variable  `n`  will store a different value every time you run this program
				 -   You don’t have to understand what  `rand`,  `srand`, and  `RAND_MAX`  do. Please do not touch this code
				 -   The output of the program should be:
				     -   The string  `Last digit of`, followed by
				         -   `n`, followed by
					     -   the string  `is`, followed by
					             -   if  `n`  is greater than 5: the string  `and is greater than 5`
						             -   if  `n`  is 0: the string  `and is 0`
							             -   if  `n`  is less than 6 and not 0: the string  `and is less than 6 and not 0`
								         -   followed by a new line
## 2-print\_alphabet.c
									 Write a program that prints the alphabet in lowercase, followed by a new line.

									 -   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   All your code should be in the  `main`  function
	-   You can only use  `putchar`  twice in your code
## 3-print\_alphabt.c
	Write a program that prints the alphabet in lowercase, followed by a new line.

	-   Print all the letters except  `q`  and  `e`
	-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   All your code should be in the  `main`  function
	-   You can only use  `putchar`  twice in your code
## 4-print\_alphabets.c
	Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

	-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   All your code should be in the  `main`  function
	-   You can only use  `putchar`  three times in your code
## 5-print\_numbers.c
	Write a program that prints all single digit numbers of base 10 starting from  `0`, followed by a new line.

	-   All your code should be in the  `main`  function
## 6-print\_numberz.c
	Write a program that prints all single digit numbers of base 10 starting from  `0`, followed by a new line.

	-   You are not allowed to use any variable of type  `char`
	-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   You can only use  `putchar`  twice in your code
	-   All your code should be in the  `main`  function
## 7-print\_tebahpla.c
	Write a program that prints the lowercase alphabet in reverse, followed by a new line.

	-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   All your code should be in the  `main`  function
	-   You can only use  `putchar`  twice in your code
## 8-print\_base16.c
	Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

	-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   All your code should be in the  `main`  function
	-   You can only use  `putchar`  three times in your code
## 9-print\_comb.c
	Write a program that prints all possible combinations of single-digit numbers.

	-   Numbers must be separated by  `,`, followed by a space
	-   Numbers should be printed in ascending order
	-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   All your code should be in the  `main`  function
	-   You can only use  `putchar`  four times maximum in your code
	-   You are not allowed to use any variable of type  `char`
## 10-print\_comb2.c
	Write a program that prints the numbers from  `00`  to  `99`.

	-   Numbers must be separated by  `,`, followed by a space
	-   Numbers should be printed in ascending order, with two digits
	-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   You can only use  `putchar`  five times maximum in your code
	-   You are not allowed to use any variable of type  `char`
	-   All your code should be in the  `main`  function
## 100-print_comb3.c
	Write a program that prints all possible different combinations of two digits.

	-   Numbers must be separated by  `,`, followed by a space
	-   The two digits must be different
	-   `01`  and  `10`  are considered the same combination of the two digits  `0`  and  `1`
	-   Print only the smallest combination of two digits
	-   Numbers should be printed in ascending order, with two digits
	-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   You can only use  `putchar`  five times maximum in your code
	-   You are not allowed to use any variable of type  `char`
	-   All your code should be in the  `main`  function
##   101-print_comb4.c
	Write a program that prints all possible different combinations of three digits.

	-   Numbers must be separated by  `,`, followed by a space
	-   The three digits must be different
	-   `012`,  `120`,  `102`,  `021`,  `201`,  `210`  are considered the same combination of the three digits  `0`,  `1`  and  `2`
	-   Print only the smallest combination of three digits
	-   Numbers should be printed in ascending order, with three digits
	-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
	-   You can only use  `putchar`  six times maximum in your code
	-   You are not allowed to use any variable of type  `char`
	-   All your code should be in the  `main`  function
