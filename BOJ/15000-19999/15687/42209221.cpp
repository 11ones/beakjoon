// 2022년 4월 20일 12:06:17
// 맞았습니다!!
// 4452KB
// 8ms
#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle(int width, int height)
	: width{ width }, height{ height }
	{

	}
	int get_width() const
	{
		return width;
	}
	int get_height() const
	{
		return height;
	}
	void set_width(int widths)
	{
		if(widths > 0 && widths <= 1000)
		width = widths;
	}
	void set_height(int heights)
	{
		if (heights > 0 && heights <= 2000)
				height = heights;
	}
	int area() const
	{
		return height * width;
	}
	int perimeter() const
	{
		return 2 * (height + width);
	}
	bool is_square() const
	{
		if (height == width)
			return true;
		else
			return false;
	}
private:
	int width{ 1 };
	int height{ 1 };
};