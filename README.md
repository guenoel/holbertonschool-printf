# _printf function
***
## General
Status of the project: before Pre-Alpha

## Usage
Source files have to be compiled using gcc

## Technology
C Language - Standard gnu89

## Collaboration
Develooped by
* Guénoël Andrieux
* Najib Kebdani

## Usage
_printf is the same function as existing printf standard library in c but with less use case and more bugs, use at your own risk !
The string is written in a simple template language: characters are copied literally into the function's output, but format specifiers, which start with a % character, indicate the location and method to translate a piece of data (such as a number) to characters.

Syntax: _printf("Your age is %d", age);

### Different kind of specifiers:
* %c character
* %s String
* %i Integer number
* %d Decimal number
That’s all for now !
