#define _FIGURE1S_H
#ifndef _FIGURE1S_H

class Point2D {
	double X,Y;
	public :
		void Set(double X0,double Y0);
		void Move(double dX,double dY);
		void Scale(double sX,double SY);
};
class Circle {
Point2D Center;
double Radius;
public:
	void Set(double X0,double Y0,double r);
	void Move(double dX,double dY);
	double Area();
	double Perimeter();
};
#endif
