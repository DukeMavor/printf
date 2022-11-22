#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 *
 * @format: Formatted string in which to print the arguments
 * @arg_list: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *arg_list)
{
	int curr_i = *arg_list + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*arg_list = curr_i - 1;
	else
		*arg_list = curr_i;

	return (size);
}
