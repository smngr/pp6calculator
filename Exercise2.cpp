#include <iostream>

int main()
{	double a;
	double b;
	double c;
	
	std::cout << "Enter two variables to be multiplied, A and B: \nA =";
	std::cin >> a;
	std::cout << "B =";
	std::cin >> b;
	
	c = a * b;
	
	std:: cout << "A * B = ";
	std::cout << c << std::endl;
	
	return 0;
}
