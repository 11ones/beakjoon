// 2022년 4월 20일 11:31:29
// 틀렸습니다
// KB
// ms
#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle(int width, int height)
	: width{ 1 }, height{ 1 }
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
		if(widths > 0 || widths <= 1000)
		width = widths;
	}
	void set_height(int heights)
	{
		if (heights > 0 || heights <= 1000)
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
	int width;
	int height;
};
