#ifndef _FIGURE_IO_H
#define _FIGURE_IO_H
#include "Figures.h"
#include <iostream>
using namespace std;
istream& operator >> (istream& inDevice,Circle& cir);
ostream& operator << (ostream& oDevice,Circle& cir);
#endif
