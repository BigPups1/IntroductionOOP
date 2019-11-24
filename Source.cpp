#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Point
{ 
	double x;
	double y;
  public:
	  double get_x() const
	  {
		  return x;
	  }
	  double get_y() const
	  {
		  return y;
	  }
	  void set_x(double x)
	  {
		  if (x >= -1000 && x <= 1000)
		  {
			  this->x = x;
		  }
		  else
		  {
			  this->x = 0;
		  }
	  }
	  void set_y(double y) 
	  {
		  if (y >= -1000 && y <= 1000)
		  {
			  this->y = y;
		  }
		  else
		  {
			  this->y = 0;
		  }
	  }
	  /*Point()
	  {
		  x = y = 0;
		  cout << "DefultConstructor: \t" << this << endl;
	  }*/
	  Point(double x=0, double y=0) // у этого конструктора каждый параметр имеет параметр по умолчанию,
		                           //которые он приймет если при вызове функции не передать соотвествующие аргументы
	  {
		  this->x = x;
		  this->y = y;
		  cout << "Constructor: \t" << this << endl;
	  }
	  Point(const Point& other)
	  {
		  this->x = other.x;
		  this->y = other.y;
		  cout << "CopyConstructor: \t" << this << endl;
	  }
	  ~Point()
	  {
		  cout << "Destructor: \t" << this << endl;
	  }
	  //   methods
	  void print()
	  {
		  cout << x << "\t" << y << endl;
	  }

};

void main()
{
	setlocale(LC_ALL, "");
	/*int a; //ќбъ€вленние переменой "а" типа 'int'.
	Point A; // ќбъ€вленние пременой "ј" типа 'Point' или объ€вленние объекта "ј" стркутуры 'Point'.
	cout << sizeof(A) << endl;
	cout << sizeof(Point) << endl;
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;
	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
	cout << pA << endl;
	cout << &(*pA).x << endl;*/
	Point A(2,3);
	/*A.set_x(1001);
	A.set_y(-1001);*/
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point B;
	cout << B.get_x() << "\t" << B.get_y() << endl;
	B.print();

	Point C = 5;
	C.print();

	Point D = C;
	D.print();
}