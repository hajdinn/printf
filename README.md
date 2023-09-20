## printf()

### Description: 
This is a team project for Alx cohort 18 about _printf which will behave like stdio.h library printf function.


The Main objective of this project is:

1. How to collaborate as a team on Github
2. Understanding printf and its complexities
3. How to use Variadic function, malloc in a project
4. How to write a good and clean code according to betty standard and documentation



### General Requirements

Allowed editors: vi, vim, emacs
All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

All files will end with a new line
Our code will use the Betty style, as it will be checked using betty-style.pl and betty-doc.pl
we are not allowed to use global variables.
No more than 5 functions per file.
All the prototypes of all the functions will be included in the header file.
We created our own Putchar named djput

Project Prototype: int _printf(const char *format, ...);

### Uses
Prints a string to the standard output, according to a given format
Returns the number of characters in the output string on success
The function is called this way: _printf("format string", arguments...) 
where format string can contains flags, conversion specifiers, with characters.

### specifiers
1. (%d) 
2. (%u)
3. (%s)
4. (%x %X)
5. (%o)
6. (%b)
7. (%p)
8. (%S)
9. (%r)
10. (%R)

### Tasks

Below are the tasks of this project

Task 0. 
I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to format.
c : converts input into a character
s : converts input into a string
% : 
Task 1.
Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:

d : converts input into a base 10 integer
i : converts input into an integer

Task 2.
Just because it's in print doesn't mean it's the gospel
Create a man page for your function

Task 3.
With a face like mine, I do better in print
Handle the following conversion specifiers:

b : the unsigned int argument is converted to binary


Task 4

Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

Task 5. 
My weakness is wearing too much leopard print
Handle the following custom conversion specifier:

S : prints the string
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

Task 6.
How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier:

p : int input is converted to a pointer address

Task 7.
The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:

+ : adds a + in front of signed positive numbers and a - in front of signed negative numbers
space : same as +, but adds a space (is overwritten by +)
#: adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions

Task 8. 
Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:

l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
h : converts d, i, u, o, x, X conversions in long signed or unsigned ints

Task 9. 
Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

Task 10. 
The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

Task 11. 
It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

Task 12. 
Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

Task 13. 
Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:
r : prints the reversed string

Task 14. 
The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:
R : prints the rot13'ed string

Task 15. 
All the## printf()

### Description: 
This is a team project for Alx cohort 18 about _printf which will behave like stdio.h library printf function.


The Main objective of this project is:

1. How to collaborate as a team on Github
2. Understanding printf and its complexities
3. How to use Variadic function, malloc in a project
4. How to write a good and clean code according to betty standard and documentation



### General Requirements

Allowed editors: vi, vim, emacs
All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

All files will end with a new line
Our code will use the Betty style, as it will be checked using betty-style.pl and betty-doc.pl
we are not allowed to use global variables.
No more than 5 functions per file.
All the prototypes of all the functions will be included in the header file.
We created our own Putchar named djput

Project Prototype: int _printf(const char *format, ...);

### Uses
Prints a string to the standard output, according to a given format
Returns the number of characters in the output string on success
The function is called this way: _printf("format string", arguments...) 
where format string can contains flags, conversion specifiers, with characters.


### Tasks

Below are the tasks of this project

Task 0. 
I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to format.
c : converts input into a character
s : converts input into a string

Task 1.
Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:

d : converts input into a base 10 integer
i : converts input into an integer

Task 2.
Just because it's in print doesn't mean it's the gospel
Create a man page for your function

Task 3.
With a face like mine, I do better in print
Handle the following conversion specifiers:

b : the unsigned int argument is converted to binary

Task 4.
What one has not experienced, one will never understand in print
Handle the following conversion specifiers:

u : converts the input into an unsigned integer
o : converts the input into an octal number
x : converts the input into a hexadecimal number
X : converts the input into a hexadecimal number with capital letters

Task 5.
Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

Task 6. 
My weakness is wearing too much leopard print
Handle the following custom conversion specifier:

S : prints the string
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

Task 7.
How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier:

p : int input is converted to a pointer address

Task 8.
The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:

+ : adds a + in front of signed positive numbers and a - in front of signed negative numbers
space : same as +, but adds a space (is overwritten by +)
#: adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions

Task 9. 
Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:

l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
h : converts d, i, u, o, x, X conversions in long signed or unsigned ints

Task 10. 
Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

Task 11. 
The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

Task 12. 
It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

Task 13. 
Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

Task 14. 
Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:
r : prints the reversed string

Task 15. 
The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:
R : prints the rot13'ed string

Task 16. 
All the above options work well together. above options work well together.
