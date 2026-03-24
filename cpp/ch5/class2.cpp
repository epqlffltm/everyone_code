/*
2026-03-23
클래스
*/

#include<iostream>

class Rectangle
{
public:
	int width, height;

	double area()
	{
		int num = width * height;

		return num;
	}
};

int main(void)
{
	Rectangle obj;
	obj.height = 10;
	obj.width = 5;

	double area = obj.area();

	std::cout << area << std::endl;

	return 0;
}