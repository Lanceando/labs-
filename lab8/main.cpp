#include <iostream>

int main() 
{
	long long n;
	std::cin >> n;
	for (int i = 0; i < 8; i++) 
	{
		std::cout << (int)*((unsigned char*)(&n) + i) << " ";
	}
}
