#include "main.h"
/**
 * _islower - check if a char us lower.
 * @c: the char to be checked
 *
 * Returb: 1 if char is low, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
