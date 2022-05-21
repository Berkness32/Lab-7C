#include <iostream>
#include <iomanip>
#include "stats.h"
using namespace std;

void printValues(rainfall& obj);

int main()
{
	rainfall statsClass;
	double value;

	for (int index = 0; index < MONTHS; index++)
	{
		cout << "Please enter rainfall for month " << (index + 1) << ": ";
		cin >> value;
		while (value < 0)
		{
			cout << "Rainfall must be more than zero.\n";
			cout << "Please re-enter the rainfall for the month: ";
			cin >> value;
		}
		statsClass.setValue(value, index);
		cout << "\n";
	}

	cout << setprecision(1) << fixed;
	cout << "Annual rainfall report\n";
	printValues(statsClass);
	cout << "\n";
	cout << "Total rainfall for the year is " << statsClass.getTotal() << "\n";
	cout << "Average rainfall was " << statsClass.getAvg() << "\n";
	cout << "Lowest rainfall was " << statsClass.getSmallest() << "\n";
	cout << "Highest rainfall was " << statsClass.getLargest() << "\n";
}

void printValues(rainfall& obj)
{
	for (int index = 0; index < MONTHS; index++)
	{
		cout << "Month " << (index + 1) << " rainfall is " << setw(4) << obj.getRain(index);
		cout << "\n";
	}
}