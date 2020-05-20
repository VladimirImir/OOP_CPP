#include <iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return  x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
};

class Point3D :public Point
{
	double z;
public:
	double get_z()const
	{
		return z;
	}
	void set_z()
	{
		this->z = z;
	}
};

void main()
{
	int a;   // Объявление переменной 'A', типа 'int'.
	Point A; // Объявление переменной 'A', типа 'Point'.
	         // Создание экземпляра 'A', структуры 'Point'.



	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point* pA = &A;
	cout << pA->get_x() << "\t" << pA->get_y() << endl;

	Point3D B;
}