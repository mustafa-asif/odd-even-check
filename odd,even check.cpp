// odd,even check.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int num1;
	cout << "ENTER NUMBER : " << endl;
	cin >> num1;
	if (num1 % 2 == 0)
	{
		cout << "ITS EVEN NUMBER : " << num1 << endl;
	}
	else
	{
		cout << "ITS ODD NUMBER : " << num1 << endl;
	}
	return 0;
}