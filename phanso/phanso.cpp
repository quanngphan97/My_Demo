#include <iostream>
class Phanso
{
	private: 
	int tu,mau;
	public:
	Phanso();
	Phanso(int);
	Phanso(int,int);
};
// constructor l� h�m l� phuogn thuc ten y chang cai class ,dung public
// constructor l� phuong thuc khoi tao 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Phanso::Phanso()
{
	tu = 0 ;
	mau = 1;
}
Phanso::Phanso(int t)
{
	tu = t;
	mau = 1 ;
}
Phanso::Phanso(int t,int m)
{
	if(m<0)
	{
		tu = -t;
		mau = - m;
	}
	if(m==0) m = 1 ;
	tu = t;
	mau = m;
}
int main(int argc, char** argv) {
	Phanso a(2,3);
	Phanso b(5);
	Phanso c;
	c = 7 ;
	return 0;
}
