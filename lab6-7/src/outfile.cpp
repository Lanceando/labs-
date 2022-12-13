#include <iostream>
#include "Header.h"
#include <fstream>

namespace mt
{
	void OutputFile(int& a, int& b, int matrix[100][100])
	{
		std::ofstream f;
		f.open("output.txt");

		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				f << matrix[i][j] << " ";
			}
			f << std::endl;
		}
	}
}