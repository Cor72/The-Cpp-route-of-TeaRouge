#include<iostream>
using namespace std;

class Shape
{
public:
	virtual void printArea() = 0; 
};

class Circle :public Shape 
{
public:
	Circle(float r) :radius(r) {};
	virtual void printArea() 
	{
		cout << "Area of Circle：" << endl << 3.14159 * radius * radius;
	}

private:
	float radius;
};

class Rectangle :public Shape
{
public:
	Rectangle(float w, float h) :width(w), height(h) {};
	virtual void printArea()
	{
		cout << "Area of Rectangle：" << endl << width * height << endl;
	}

private:
	float width;
	float height;
};

class Triangle :public Shape 
{
public:
	Triangle(float w, float h) :width(w), height(h) {}; 
	virtual void printArea()
	{
		cout << "Area of Triangle：" << endl << 0.5 * width * height << endl;
	}

private:
	float width;
	float height;
};

void main()
{
	Circle circle(5);        // 建立 Circle 类对象 circle
	circle.printArea();        // 输出 circle的面积

	Rectangle rectangle(3, 5); // 建立 Rectangle 类对象 rectangle
	rectangle.printArea();     // 输出 rectangle 的面积

	Triangle triangle(4, 6);   // 建立 Triangle 类对象 
	triangle.printArea();      // 输出 triangle 的面积
}
