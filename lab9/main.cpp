#include <iostream>


class Circle
{
private:
	const double PI = 3.14159265;
	double c_rad = 0;
	double c_len = 0;

public:

	Circle(int c_rad)
	{
		if (CorrRad(c_rad) == true)
		{
			c_len = 2 * PI * c_rad;
		}
	}
	
	~Circle() {}

	bool CorrRad(int rad)
	{
		if (rad <= 0)
		{
			return false;
		}
		else
			return true;
	}

	void len_circle()
	{
		if (c_len > 0)
			std::cout << c_len << std::endl;
		else
			std::cout << "VvedenbI nevernbIe dannbIe";
	}

};

int main()
{
	int rad;

	std::cin >> rad;

	Circle circ(rad);
	circ.len_circle();
}