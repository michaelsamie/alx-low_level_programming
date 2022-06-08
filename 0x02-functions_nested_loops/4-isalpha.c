#include "main.h"
/**
*_islower - check for upper and  lower case c
*@c : argument to deternmine return
*Return: return 1 and 0 depending on condintion.
*/
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
