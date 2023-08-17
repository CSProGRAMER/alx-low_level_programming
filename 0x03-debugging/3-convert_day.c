#include "main.h"

/**
 * convert_day - converts day of month to day of year, accounting for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day, int year)
{
	int dayOfYear = 0;
	int daysInMonths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int i = 0;

	if (month > 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			daysInMonths[2] = 29;
		}
	}

	for (i = 1; i < month; i++)
	{
		dayOfYear += daysInMonths[i];
	}

	dayOfYear += day;

	return (dayOfYear);
}
