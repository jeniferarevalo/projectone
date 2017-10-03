// 9-28-17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int level;
	cout << "level of the reservoir" << endl;
	cin >> level;
	if (level < 10)
	{
		cout << "Water level is below the expected level at this time of the year" << endl;
	}
	else if (level < 20)
	{
		cout << "Normal water level" << endl;
	}
	else if (level < 30)
	{
		cout << "Warning - Water level is above the normal level" << endl;
	}
	else if (level < 40)
	{
		cout << "Alert - Water level is very near to the crest of the reservoir" << endl;
	}
    return 0;
}

