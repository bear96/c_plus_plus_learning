#include <iostream>

double add(double num1, double num2)
{
	return num1+num2;
}

int main()
{
	double num1, num2;
	std::cout << "Enter number 1: " << std::endl; 
	std::cin >> num1;
	std::cout << "Enter number 2: " << std::endl;
	std::cin >> num2;
	std::cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << std::endl;
	return 0;	
}

		
