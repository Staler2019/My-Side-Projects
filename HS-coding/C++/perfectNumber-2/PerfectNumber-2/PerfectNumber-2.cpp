// PerfectNumber-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> prime;
	prime.push_back(2);
	for (int i = 3; i < 100000 / 28; i++)
	{
		int j;
		for (j = 0; j < prime.size(); j++)
		{
			if (i % prime[j] == 0)
				break;
		}
		if (j == prime.size())
			prime.push_back(i);
	}
	for (int i = 0; i < prime.size(); i++)
	{
		cout << prime[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < 100000; i++)
	{
		int num = i;//i
		int test = 1;//2n
		for (int j = 0; j < prime.size(); j++)
		{
			int n = 0, temp = 1, x = 1;//a,b,c...;
			while (num % prime[j] == 0)
			{
				n++;
				num /= prime[j];
			}
			for (int k = 0; k < n; k++)
			{
				x *= prime[j];
				temp += x;
			}
			test *= temp;
		}
		if (test == 2 * i)
		{
			cout << i << endl;
		}
	}

	return 0;
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
