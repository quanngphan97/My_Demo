#include "Figure1s.h"
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void inputCircleData(istream& inDevice, ?Circle& cir)
{
	double X0,Y0,r;
	inDevice >> X0 >> Y0 >> r;
	cir.Set(X0,Y0,r);
}*/
/*void outputCircleData(ostream& outDevice, Circle& cir)
{ 
 	outDevice << " + Area of Circle = " << cir.Area() << endl;
 	outDevice << " + Permiter of Circle = " << cir.Perimeter() << endl;
}*/
/*void testcase()
{
	Point2D p;
	p.Set(7.2,2.3);
	p.Move(2.7,4.1);
	Circle Cir;
	Cir.Set(1.0,1.0,3);
	double area = Cir.Area();
	double perimeter = Cir.	Perimeter();
	cout << "Area : " << area << endl;
	cout << "Perimeter : " << perimeter << endl;
	return 0;
}*/
int main(int argc, char** argv) {
/*	Circle mycircle ;
	cout << "Input center and Radius" << endl;
	inputCircleData(cin,mycircle);
	outputCircleData(cout,mycurcle);
	return 0;
	*/
	Point2D p;
	
	p.Set(7.2,2.3);
	p.Move(2.7,4.1);
	Circle Cir;
	Cir.Set(1.0,1.0,3);
	double area = Cir.Area();
	double perimeter = Cir.	Perimeter();
	cout << "Area : " << area << endl;
	cout << "Perimeter : " << perimeter << endl;
	return 0;
}
