#include<iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    long long n;
    int byte;
    std::cin >> n;

    char* pb;
    pb = (char*)&n;

    for (char* i = pb; i < pb + 4; i++)
    {
        byte = (int)*i;
        if (byte < 0) {
            std::cout << byte + 256 << " ";
        }
        else {
            std::cout << byte << " ";
        }
    }
}
