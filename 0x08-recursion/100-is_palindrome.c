#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * * is_palindrome - checks string 
 * * @s: reverse
 * * Return: 1 or 0
 * */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * * _strlen_recursion - returns the length of a string
 * * @s: string 
 * *
 * * Return: interger
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * * check_pal - checks the characters 
 * * @s: string
 * * @i: counter
 * * @len: string lenght
 * * Return: 1 or  0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

