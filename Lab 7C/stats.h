/*
* rainfall
* ****************
* rain[] : double
* ****************
* rainfall() :
* setValue(r[] : double, n : int) : void //main array passed to object
* getTotal() : double
* getAvg() : double
* getLargest() : double
* getSmallest() : double
*/
#pragma once
#include <iostream>
#include <iomanip>

const int MONTHS = 12;

class rainfall {
private:
	double rain[MONTHS];
public:
	rainfall();
	void setValue(double r, int n);
	double getRain(int x);
	double getTotal();
	double getAvg();
	double getLargest();
	double getSmallest();
};