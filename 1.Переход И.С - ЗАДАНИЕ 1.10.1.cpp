//02.02.23
//Переход И.С - ЗАДАНИЕ 1.10.1

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите 2 числа:";

	int a, b;
	cin >> a >> b;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << float(a) / float(b) << endl;
	cout << a << " & " << b << " = " << (a & b) << endl;
	cout << a << " | " << b << " = " << (a | b) << endl;
	cout << a << " ^ " << b << " = " << (a ^ b) << endl;

	return 0;
}