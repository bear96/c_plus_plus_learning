#include <iostream>

bool isPalindrome(int num)
{
	int dummy = num;
	int reverse = 0;
	int last_dig;
	while (dummy > 0)
	{
		last_dig = dummy%10;
		reverse = reverse*10 + last_dig;
		dummy = dummy/10;
	}
	if (reverse == num)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	std::cout << "Enter a number to check palindrome: ";
	int num;
	std::cin >> num;
	if (isPalindrome(num))
	{
		std::cout << "The number " << num << " is a palindrome." << std::endl;
	}
	else
	{
		std::cout << "The number " << num << " is not a palindrome." << std::endl;
	}
	return 0;
}

