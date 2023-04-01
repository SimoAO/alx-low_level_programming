#include "main.h"
#include <stdio.h>
 /**
  * infinite_add - adds two numbers.
  * @n1: number one.
  * @n2: number two.
  * @r: buffer that the function will use to store the result.
  * @size_r: buffer size.
  *
  * Return: the pointer to dest.
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int k1 = 0, k2 = 0, da, di, dr1, dr2, add = 0;

	while (*(n1 + k1) != '\0')
	k1++;
	while (*(n2 + k2) != '\0')
	k2++;
	if (k1 >= k2)
	di = k1;
	else
	di = k2;
	if (size_r <= di + 1)
	return (0);
	r[di + 1] = '\0';
	k1--, k2--, size_r--;
	dr1 = *(n1 + k1) - 48, dr2 = *(n2 + k2) - 48;
	while (di >= 0)
	{
	da = dr1 + dr2 + add;
	if (da >= 10)
	add = da / 10;
	else
	add = 0;
	if (da > 0)
	*(r + di) = (da % 10) + 48;
	else
	*(r + di) = '0';
	if (k1 > 0)
	k1--, dr1 = *(n1 + k1) - 48;
	else
	dr1 = 0;
	if (k2 > 0)
	k2--, dr2 = *(n2 + k2) - 48;
	else
	dr2 = 0;
	di--, size_r--;
	}
	if (*(r) == '0')
	return (r + 1);
	else
	return (r);
}
