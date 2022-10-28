#include <iostream>
#include "Header.h"
using namespace std;

void employee::init(int a,int b,int c)
{
	employeecode = a;
	ageatjoining = b;
	currentage = c;
}



int employee::calculatetenure(int x, int y, int d, int e, int f)
{
	int g = x - y;
	
	if (g>=2)
	{
		cout << "Code of employee :" << d << endl;
		cout << "Age at joining job :" << e << endl;
		cout << "Current age :" << f << endl;
	}
		return g;
}





