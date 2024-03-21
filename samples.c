//Single line comment 
/*
Multiple line comment
*/
/*
C data types includes numeric(int, float, double), character (char), user-defined (struct, union, array).
'float' and 'double' stores whole numbers.
token: a string of one or more characters meaningful to the compiler. types include:
       keyword(a reserved word that cannot be used as a variable name)
       Identifier(a name given to an entity, which identifies the entity in a program at the time of execution. it's composed of letters, digits and alphabets with the starting letter an alphabet or underscore)
       constant is a value or variable that can't be changed in the program
       operator is a symbol that is used to perform operations. typess includes:
                Arithemetic operators(+, -, /,*, %)
                Relational operators (==)
       Seperators/punctuations
       white space 
*/
#include <stdio.h>
void function1()
{
     int x=10;
     static int y=10;
     x=x+1;
     y=y+1;
     printf("%d,%d", x,y);
}
