// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string int2str(int& a)
{
	stringstream ss;
	ss << a;

	return ss.str();
}

int main()
{
	int range, nowNum = 2;

	cout << "Enter a positive interger of at most 5 digits: ";
	cin >> range;
	cout  << "Perfect numbers between 1 and " << range << ": " << endl;

	while (nowNum<range)
	{
		int total = 1;
		string perfect = "1";
		
		for (int i = 2; i < nowNum; i++)
		{
			if(nowNum%i==0)
			{ 
				perfect += " + " + int2str(i);
				total += i;
			}
		}
		if (total == nowNum)
		{
			cout << total << " = " << perfect << endl;
		}
		nowNum++;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
