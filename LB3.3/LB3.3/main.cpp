// Lab_03_3.cpp
// < Прунько Анастасія >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	if (x > -6 && x < -R)
		y = x / 6;
else 
if  (x > -R && x < 0) 
	
	y = sqrt(R * R - pow(x + R, 2));
  else if (x >= 0 && x <= R) 
		
		y = sqrt(R * R - pow(x - R, 2));
  else if (x > R)
	y = -1 * (x - R);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}