/*
2026-03-23
클래스
*/

#include<iostream>
#include<numbers>
#include<string>

class Circle
{
public:
	int radius;
	std::string color;

	double cale_area()
	{
		double area = std::numbers::pi * radius * radius;

		return area;
	}
};

int main(void)
{
	Circle obj;

	obj.radius = 100;
	obj.color = "red";

	std::cout << obj.cale_area() << std::endl;
	std::cout << obj.color << std::endl;

	return 0;
}