#include "FigIO.h"
istream& operator >> (istream& inDevice ,Circle& Cir)
{
	double X0,Y0,r;
	inDevice >> X0 >> Y0 >> r;
	cir.Set(X0,Y0,r);
	return inDevice;
}
ostream& operator << (ostream& outDevice,Circle& Cir)
{
	outDevice << "+ Area of circle " << cir.Area() << endl;
	outDevice << "+ perimeter of circle " << cir.Perimeter() << endl;
	return outDevice;
}
void main()
{
	Circle mycir;
	cout << "Input center and Radius" << endl;
	cin >> mycir;
	cout << mycir;
	cin.get();
}
