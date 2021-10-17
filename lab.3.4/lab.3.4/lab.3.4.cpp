// Lab_03_4.cpp
// < Половка Злата >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.6

#include <iostream>
#include "lab.3.4.h"

using namespace std;

int main()
{
	double x; 
	double y; 
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі

	if ((y<=sqrt( R*R - (x-R)*(x-R)) && (y >= 0)) || 
		((y>=sqrt( R * R - (x+R)*(x+R)) - R)  && (y <= 0) && (y=y)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}