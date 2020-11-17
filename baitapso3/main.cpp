#include <iostream>
#include "Figures.h"
#include "FigIO.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inputCircleData(istream& inDevice,Circle& cir)
{
	double X0,Y0,r;
	inDevice >> X0 >> Y0 >> r;
	cir.Set(X0,Y0,r);
}
void outputCircleData(ostream& oDevice,Circle& cir)
{
	oDevice << " + Area of Circle " << cir.Area() << endl;
	oDevice << " + Perimeter of Circle " << cir.Perimeter() << endl;
}
void case1()
{
Point_2D P;
	P.Set(7.2,4.3);
	P.Move(2.7,4.1);
	Circle cir;
	cir.Set(1.0,1.0,3);
	double area = cir.Area();
	double Perimeter = cir.Perimeter();
	
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << Perimeter << endl;	
}
void case2()
{
	Circle mycir;
	cout << " Input Center and Radius " << endl;
	inputCircleData(cin,mycir);
	outputCircleData(cout,mycir);	
	cin.get();
}
int main(int argc, char** argv) {
	Circle myCircle;
	cout << "Input center and radius: " << endl;
	cin >> myCircle;
	cout << myCircle;
	cin.get();	
	return 0;
}
