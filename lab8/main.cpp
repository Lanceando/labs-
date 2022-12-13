#include <iostream>
int main()
{
	long long cur;
	std::cin >> cur;


	for (int i = 0; i <= sizeof(cur); i++)
	{
		printf("%d ", *(((unsigned char*)&cur) + i));
	}

	std::cout << std::endl;

	// from −9223372036854775808 to 9223372036854775807 и занимает 8 байт

}