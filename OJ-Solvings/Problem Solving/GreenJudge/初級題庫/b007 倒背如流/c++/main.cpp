#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string name;
	int x;
	cin >> name;
	for(x=name.length()-1;x>=0;x--)
		cout << name.at(x);				/* �p�G�A�Ʊ�Ĳv���A�٬O�ϥ�[]�ӳX��
										�A�p�G�A�Ʊ�í�w�ʦn�A�̦n�ϥ�at()�ӳX�ݡC */
}
