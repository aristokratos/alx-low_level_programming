#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - finds string length
 * @str: input pointer to string
 * Return: length of string
 */
int str_len(char *str)
{
int len;

for (len = 0; *str != '\0'; len++)
len++, str++;
return (len / 2);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @bytes: bytes of memory needed per size requested
 * @size: size in bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int bytes, unsigned int size)
{
unsigned int i;
char *p;

if (bytes == 0 || size == 0)
return (NULL);
if (size >= UINT_MAX / bytes || bytes >= UINT_MAX / size)
return (NULL);
p = malloc(size * bytes);
if (p == NULL)
return (NULL);
for (i = 0; i < bytes * size; i++)
p[i] = 0;
return ((void *)p);
}
/**
 * add_arrays - adds 2 arrays of ints
 * @mul_result: pointer to array with numbers from product
 * @sum_result: pointer to array with numbers from total sum
 * @len_r: length of both arrays
 * Return: void
 */
void add_arrays(int *mul_result, int *sum_result, int len_r)
{
int i = 0, len_r2 = len_r - 1, carry = 0, sum;

while (i < len_r)
{
sum = carry + mul_result[len_r2] + sum_result[len_r2];
sum_result[len_r2] = sum % 10;
carry = sum / 10;
i++;
len_r2--;
}
}
/**
 * is_digit - checks for digits
 * @c: input character to check for digit
 * Return: 0 failure, 1 success
 */
int is_digit(char c)
{
if (c >= '0' && c <= '9')
return (1);
printf("Error\n");
return (0);
}
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @num1: factor # 1 (is the smaller of 2 numbers)
 * @len_1: length of factor 1
 * @num2: factor # 2 (is the larger of 2 numbers)
 * @len_2: length of factor 2
 * @len_r: length of result arrays
 * Return: 0 fail, 1 success
 */
int *multiply(char *num1, int len_1, char *num2, int len_2, int len_r)
{
int i = 0, i1 = len_1 - 1;
int i2, product, carry, digit, *mul_result, *sum_result;

sum_result = _calloc(sizeof(int), (len_r));
while (i < len_1)
{
mul_result = _calloc(sizeof(int), len_r);
i2 = len_2 - 1, digit = (len_r - 1 - i);
if (!is_digit(num1[i1]))
return (NULL);
carry = 0;
while (i2 >= 0)
{
if (!is_digit(num2[i2]))
return (NULL);
product = (num1[i1] - '0') * (num2[i2] - '0');
product += carry;
mul_result[digit] += product % 10;
carry = product / 10;
digit--, i2--;
}
add_arrays(mul_result, sum_result, len_r);
free(mul_result);
i++, i1--;
}
return (sum_result);
}
/**
 * print_me - prints my array of the hopeful product here
 * @sum_result: pointer to int array with numbers to add
 * @len_r: length of result array
 * Return: void
 */
void print_me(int *sum_result, int len_r)
{
int i = 0;

while (sum_result[i] == 0 && i < len_r)
		i++;
if (i == len_r)
_putchar('0');
while (i < len_r)
_putchar(sum_result[i++] + '0');
_putchar('\n');
}
/**
 * main - multiply 2 input #'s of large lengths and print result or print Error
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, Success
 */
int main(int argc, char **argv)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}

/**
 * _isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0).
 **/
int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}

/**
 *_calloc - allocate array of size * nmemb.
 * @nmemb: number of elements.
 * @size: size of element.
 * Return: pointer to array.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	tab = malloc(size * nmemb);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		tab[i] = '0';

	return (tab);
}

/**
 * mul_array - multiply two arrays.
 * @a1: first array.
 * @len1: length of array a1.
 * @a2:  char.
 * @a3: array for result.
 * @lena: length of array a3.
 * Return: pointer to array.
 **/

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, i, k;

	k = lena;
	for (i = len1 - 1; i >= 0 ; i--)
	{
		mul += (a1[i] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

		while (mul != 0)
		{
			mul += a3[k] - '0';
			a3[k] = (mul % 10) + '0';
			mul /= 10;
			k--;
		}

	return (a3);
}
/**
 * print_array - print all digits of array.
 * @nb: number of elements to print.
 * @a: array of elements.
 **/
void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, c, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}
	for (i = len2 - 1, c = 0; i >= 0; i--)
	{
	tabres = mul_array(argv[1], len1, argv[2][i], tabres, (lenres - 1 - c));
	c++;
	}
	print_array(tabres, lenres);
	free(tabres);
	exit(EXIT_SUCCESS);
	return (0);
}
