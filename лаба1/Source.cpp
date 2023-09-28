// Lab_02.cpp
// < Якубенко Олександра >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 28 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	z1 = (cos(x) * cos(x) * cos(x) * cos(x)) + (sin(y) * sin(y)) + (((sin(2 * x) * sin(2 * x)) / 4) - 1);

	z2 = sin( y + x ) * sin( y - x );


	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	
	return 0;
}
