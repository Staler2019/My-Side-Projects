// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<algorithm>
using namespace std;

#define BUF_SIZE 10

int a;

void display(int array[], int maxlen) 
{ 
	int i; 

	for (i = 0; i < maxlen; i++) 
	{ 
		printf("%-3d", array[i]);
	} 
	printf("\n"); 
	
	return; 
}

void quicksort(int array[], int maxlen, int begin, int end)
{
	int i, j;

	if (begin < end)
	{
		i = begin + 1;
		j = end;

		while (i < j)
		{
			if (array[i] > array[begin])
			{
				swap(array[i], array[j]);
				j--;
			}
			else
			{
				i++;
			}
		}
		
		if (array[i] >= array[begin])
		{
			i--;
		}

		swap(array[begin], array[i]);

		quicksort(array, maxlen, begin, i);
		quicksort(array, maxlen, j, end);
	}
}

int main()
{
	int n;
	int array[BUF_SIZE] = { 12,85,25,16,34,23,49,95,17,61 };
	int maxlen = BUF_SIZE;

	printf("排序前的數列\n");
	display(array, maxlen);

	stable_sort(array, array + maxlen);

	printf("排序後的數列\n");
	display(array, maxlen);


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
