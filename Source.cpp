#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	int code;
	int jobage;
	int currentage;

	employee t1, t2, t3, t4, t5;
	for (int i = 0; i < 5; i++)
	{
		
		cout << "Enter the employee code :";
		cin >> code;
		cout << "Enter the age at joining the job :";
		cin >> jobage;
		cout << "Enter the current age :";
		cin >> currentage;
		if (i==0)
		{
			t1.init(code, jobage, currentage);

			

			cout << "TENURE :" << t1.calculatetenure(currentage, jobage, code, jobage, currentage) << " YEARS " << endl;
		}
		if (i == 1)
		{
			t2.init(code, jobage, currentage);

			

			cout << "TENURE :" << t2.calculatetenure(currentage, jobage, code, jobage, currentage) << " YEARS " << endl;
		}
		if (i == 2)
		{
			t3.init(code, jobage, currentage);

			

			cout << "TENURE :" << t3.calculatetenure(currentage, jobage, code, jobage, currentage) << " YEARS " << endl;
		}
		if (i == 3)
		{
			t4.init(code, jobage, currentage);

			
			cout << "TENURE :" << t4.calculatetenure(currentage, jobage, code, jobage, currentage) << " YEARS " << endl;
		}
		
		if (i == 4)
		{
			t5.init(code, jobage, currentage);


			cout << "TENURE :" << t5.calculatetenure(currentage, jobage, code, jobage, currentage) << " YEARS " << endl;
		}

			cout << "**************************" << endl;
		    cout << "**************************" << endl;
	}


	system("pause");
	return 0;
}