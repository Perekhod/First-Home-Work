//02.02.23
//������� �.� - ������� 1.10.1

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� 2 �����:";

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