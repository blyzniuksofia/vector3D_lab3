#include <iostream>
#include "vector3D.h"
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	vector3D a, b;
	a.Init(3, 5, 3);
	b.Read();

	cout << "a = " << a.toString() << endl;
	cout << "b = " << b.toString() << endl;

	cout << "a + b = ";
	a.add(b).Display();
	cout << "a - b = ";
	a.sub(b).Display();
	cout << "a * b (скалярний) = " << a.dot(b) << endl;
	cout << "a * 2 = ";
	a.mul(2).Display();
	cout << "|a| = " << a.length() << endl;
	cout << "|b| = " << b.length() << endl;

	if (a.equals(b))
		cout << "Вектори рівні." << endl;
	else
		cout << "Вектори не рівні." << endl;

	int c = a.comparelength(b);
	if (c < 0)
		cout << "|a| менше за |b|." << endl;
	else if (c > 0)
		cout << "|a| більша за |b|. " << endl;
	else
		cout << "Довжини рівні." << endl;

	cout << endl << "Конструктори:" << endl;
	vector3D a1;
	vector3D b2(1, 2, 3);
	vector3D c3(b2);

	cout << "a1 = " << a1.toString() << endl;
	cout << "b2 = " << b2.toString() << endl;
	cout << "c3 = " << c3.toString() << endl;

	return 0;
}