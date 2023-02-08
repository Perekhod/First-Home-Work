//02.02.23
//First Home Work - Perekhod I.S - the simplest calculator

#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	std::cout << "Enter two number:";

	int a, b;
	std::cin >> a >> b;

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << float(a) / float(b) << std::endl;
	std::cout << a << " & " << b << " = " << (a & b) << std::endl;
	std::cout << a << " | " << b << " = " << (a | b) << std::endl;
	std::cout << a << " ^ " << b << " = " << (a ^ b) << std::endl;
}