#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Entry
 * @name: name of the person
 * @f: callback function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
