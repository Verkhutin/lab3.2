// lab3.2.cpp
// Верхутін Даніїл
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 3


#include <iostream>

using namespace std;

int main() {
	double x;
	double a;
	double b;
	double c;
	double F;

	cout << "x = "; cin >> x;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	if (a < 0 && c != 0)
		F = a * x * x + b * x + c;
	if (a > 0 && c == 0)
		F = (-a) / (x - c);
	if (!(a < 0 && c != 0) && !(a > 0 && c == 0))
		F = x / c;

	cout << endl;
	cout << "1) F = " << F;


	if (a < 0 && c != 0)
		F = a * x * x + b * x + c;
	else 
		if (a > 0 && c == 0)
		F = (-a) / (x - c);
	else
		F = x / c;

	cout << endl;
	cout << "2) F = " << F;

	cin.get();
	return 0;
}
