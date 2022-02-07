// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <ctime>
using namespace std;

void f(int*, int);
void f_2(int, int*);

int main()
{
	int loop_num = 24000;
	int a, b;
	cin >> a >> b;
	double start_time = clock();	//get clock before execute

	for (int i = 0; i < loop_num; i++) {
		f_2(a, &b);
		for (int j = 0; j < loop_num; j++) {
			f(&a, b);
		}
	}
	double end_time = clock();	//get clock after execute

	cout << a << endl;
	cout << b << endl;
	cout << end_time - start_time << endl;	//get execute time (5963 ms) vs (4362 ms)
	
	return 0;
}

void f(int* a, int b) {
	*a %= 7;
	b %= 11;
	*a = *a * *a - 3 * b;
	return;
}

void f_2(int a, int *b) {
	a %= 13;
	*b %= 5;
	*b = *b * *b - 13 * a;
	return;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
