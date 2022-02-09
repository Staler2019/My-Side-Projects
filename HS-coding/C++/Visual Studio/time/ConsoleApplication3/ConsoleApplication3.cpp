// ConsoleApplication3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

char encryEng(char a, int b) {
	char encryedEng = a;
	int r, l;

	if (a < 91 && a > 64) {			//uppercase letter 65-90
		r = 90;
		l = 65;
	}
	else if (a < 123 && a > 96) {	//lowercase letter 97-122
		r = 122;
		l = 97;
	}
	else
		return encryedEng;

	if (a<r + 1 && a>l - 1) {
		encryedEng = a + b;
		if (encryedEng < l) {
			encryedEng += (r - l + 1);
		}
		else if (encryedEng > r) {
			encryedEng -= (r - l - 1);
		}
	}

	return encryedEng;
}

int main()
{
	int offset;
	string input;
	time_t now = time(0);
	tm ltm;
	//tm* ltm = localtime(&now);
	localtime_s(&ltm, &now);

	cin >> offset;
	cin.get();				//get '\n' out
	getline(cin, input);

	for (int i = 0; i < input.length(); i++)
		cout << encryEng(input.at(i), offset);
	cout << endl;

	cout << ltm.tm_mon + 1 << "-";
	cout << ltm.tm_mday << " ";
	cout << ltm.tm_year + 1900;

	cout << endl;
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