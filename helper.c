#include "header.h"
#include <stdio.h>

char *int_t_string(int n)
{
	int i;
	int check;
	char *s;

	i = 0;
	check = 0;

	s = malloc(intlen(n) * sizeof(char));

	if (n == 0)
	{
		s[i] = '0';
	}
	else if (n < 0)
	{
		n = _abs(n);
		s[i] = '-';
		check = 1;
		i++;
	}

	while (n != 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}

	s[i] = '\0';

	if (check != 0)
		_rev(s, 1);
	else
		_rev(s, 0);
	return (s);
}

/**
 * _strlen - string length
 * @s: string
 *
 * Return: number of length in the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _rev - reverses string then prints
 * @s: string
 */

void _rev(char *s, int start)
{
	char temp;
	int a;
	int b;
	
	if (start == 0)
		a = _strlen(s) - 1;
	else
		a = _strlen(s);

	for (b = start; b <= a / 2; b++)
	{
		temp = s[b];
		s[b] = s[a - b];
		s[a - b] = temp;
	}

}

/**
 * intlen - get the length of an integer
 * @n: integer to check
 *
 * Return: length of n
 */

int intlen(int n)
{
	int c;

	c = !n;

	while (n)
	{
		c++;
		n = n / 10;
	}

	return (c);
}

/**
 * _abs - takes absolute value of a number
 * @n: number
 *
 * Return: abs of n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
