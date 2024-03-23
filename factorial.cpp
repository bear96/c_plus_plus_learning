#include <iostream>

double factorial(int num)
{
	double fact = 1.0;
	for (int i = 1; i<=num; i++)
	{
		fact = fact*i;
	}
	return fact;
}

int main()
{
	std::cout << "Enter a number: " << std::endl;
	int num;
	std::cin >> num;
	double fact = factorial(num);
	std::cout << "The factorial of " << num << " is " << fact << std::endl;
	return 0;
}

	
		
