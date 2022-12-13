#include <iostream>
#include <fstream>
#include "Header.h"



namespace mt
{
	void readFile(int& n, int& m, int matrix[100][100])
	{
		std::ifstream fileRead;
		fileRead.open("input.txt");
		fileRead >> n;
		fileRead >> m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int temp;
				fileRead >> temp;
				matrix[i][j] = temp;
			}

		}
	}
}