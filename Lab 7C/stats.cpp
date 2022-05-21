#include "stats.h"

rainfall::rainfall()
{
	for (int index = 0; index < 12; index++)
		rain[index] = 0;
}

void rainfall::setValue(double r, int n)
{
	rain[n] = r;
}

double rainfall::getRain(int x)
{
	return rain[x];
}

double rainfall::getTotal()
{
	int total = 0;
	for (int index = 0; index < MONTHS; index++)
		total += rain[index];
	return total;
}

double rainfall::getAvg()
{
	return getTotal() / 12;
}

double rainfall::getLargest()
{
	int count;
	int highest;
	highest = rain[0];
	for (count = 1; count < MONTHS; count++)
	{
		if (rain[count] > highest)
			highest = rain[count];
	}
	return highest;
}

double rainfall::getSmallest()
{
	int count;
	int lowest;
	lowest = rain[0];
	for (count = 1; count < MONTHS; count++)
	{
		if (rain[count] < lowest)
			lowest = rain[count];
	}
	return lowest;
}
