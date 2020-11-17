#ifndef _FIGURE_H
#define _FIGURE_H
class Point_2D
{
	double X,Y;
	public:
		void Set(double X0,double Y0);
		void Move(double dX,double dY);
		void Scale(double sX,double sY);
};
class Circle {
	Point_2D center;
	double Radius;
	public:
		void Set(double X0,double Y0,double r);
		void Move(double dX,double dY);
		double Area();
		double Perimeter();
};
#endif
