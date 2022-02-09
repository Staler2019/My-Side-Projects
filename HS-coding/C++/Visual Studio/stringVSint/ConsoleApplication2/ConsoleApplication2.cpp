// ConsoleApplication2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include <sstream>

std::string int2str(int a) {
	std::string converted_str;
	std::stringstream ss;
	ss << a;
	ss >> converted_str;
	return converted_str;
}

int str2int(std::string a) {
	int converted_int;
	std::stringstream ss;
	ss << a;
	ss >> converted_int;
	return converted_int;
}

std::string plus(std::string a, std::string b) {
	std::string ans;
	int length = b.length() , adv;

	ans.assign(a, 0, a.length() - b.length());
	
	for (int i = 0; i < length; i++){
		//std::cout << "a.at(" << i << ") : " << a.at(i) << std::endl;



		a.at(i+1) += (a.at(i) + b.at(i) - 96) / 10;
		a.at(i) = (a.at(i) + b.at(i) - 96) % 10 + 48;
		std::cout << "a.at(" << i << ") : " << a.at(i) << std::endl;
	}
	for (;adv;) {

	}

	return a;
}

int main()
{
	std::string a, b;
	std::cin >> a >> b;	

	if (a.length() >= b.length())
		std::cout << plus(a, b);
	else
		std::cout << plus(b, a);
	
	return 0;
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
