#include "Figures1.h"
void Point_2D::Set(double X0,double Y0)
{
	X=X0;
	Y=Y0;
}
void Point_2D::Move(double dX,double dY)
{
	X+=dX;
	Y+=dY;
}
void Point_2D::	Scale(double sX,double sY)
{
	X*=sX;
	Y*=sY;
}
const double PI = 3.14159;
void Circle::Set(double Xo, double Yo, double r)
{
	Center.Set(Xo, Yo);
	if (r < 0) r  = 0;
	Radius = r;
}
void Circle::Move(double dX, double dY)
{
	Center.Move(dX, dY);
}
double Circle::Area()
{
	return PI*Radius*Radius;
}
double Circle::Perimeter(){
	return 2*PI*Radius;
}
