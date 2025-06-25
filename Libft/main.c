
#include "my_utils.h"
#ifndef _VA_LIST
typedef __builtin_va_list va_list;
#define _VA_LIST

char **init_str_array(int n, ...)
{
	va_list argp;
	char **result = calloc(n, sizeof(char *));

	va_start(argp, n);
	for (int i = 0; i < n; i++)
		result[i] = va_arg(argp, char *);

	va_end(argp);
	return result;
}
char **expected = init_str_array(2, "hello!", NULL);
