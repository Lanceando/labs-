#include <iostream>
#include <fstream>
#include "Header.h"
#include <Windows.h>

int main()
{
	SetConsoleCP('1251');
	SetConsoleOutputCP('1251');
	int matrix[100][100];
	int a, b;
	


	mt::readFile(a, b, matrix);


	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	mt::changeMatrix(a, b, matrix);
	std::cout << std::endl;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	mt::OutputFile(a, b, matrix);

}
