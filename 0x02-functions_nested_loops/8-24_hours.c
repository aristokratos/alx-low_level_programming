#include "main.h"


/**
 * jack_bauer - prints all minutes of the day
 * @void: first int to add
 *
 **/

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}

	}
}
