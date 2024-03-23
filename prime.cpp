#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
	if (num > 3)
	{
		int limit = int(sqrt(num));
		for (int i = 2; i<=limit;i++)
		{
			if (num % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}


int main()
{
	cout << "Enter your number here to check if it is prime: ";
	int num;
	cin >> num;
	if (isPrime(num))
	{
		cout << "The number " << num << " is a prime number"<< endl;
	}
	else
	{
		cout << "The number " << num << " is not a prime number"<< endl;
	}
	return 0;
}

	
