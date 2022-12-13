#include <iostream>
#include "Header.h"
#include <Windows.h>


namespace mt
{
    
    bool isProst(int x)
    {
        if (x <= 1) return false;
        for (int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
                return false;
        }
        return true;
    }


    bool nullsum(int a, int b, int matrix[100][100])
    {
        int sum;
        //matrix[строка][стобец]
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (isProst(matrix[i][j]) == true)
                {
                    sum = 0;
                    for (int k = 0; k < b; k++)
                        sum += matrix[i][k];
                    if (sum == 0)
                        return true;
                }
            }
        }
        return false;
    }


    void changeMatrix(int a, int b, int matrix[100][100])
    {
        int norms[100];
        for (int i = 0; i < b; i++)
            norms[i] = 0;
        if (nullsum(a, b, matrix) == true)
        {
            for (int j = 0; j < b; j++)
            {
                for (int i = 0; i < a; i++)
                {
                    norms[j] += abs(matrix[i][j]);
                }
            }
        }
        /*for (int i = 0; i < b; i++)
            std::cout << norms[i] << ' ';
        std::cout << std::endl;
        */
        for (int k = 0; k < b - 1; k++)
        {
            for (int j = 0; j < b - 1 - k; j++)
            {
                if (norms[j] < norms[j + 1])
                {
                    std::swap(norms[j], norms[j + 1]);
                    for (int i = 0; i < a; i++)
                    {
                        std::swap(matrix[i][j], matrix[i][j + 1]);
                    }
                }
            }
        }
    }
}