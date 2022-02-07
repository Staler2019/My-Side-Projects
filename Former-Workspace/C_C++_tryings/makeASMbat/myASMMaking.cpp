#include <iostream>
using namespace std;

int main() {
    cout << "what the name of file you want to make:";
    string fileName;
    cin >> fileName;
    freopen("aa.txt", "r", stdin);
    freopen("aa.txt", "w", stdout);
    cout << fileName << endl;
}