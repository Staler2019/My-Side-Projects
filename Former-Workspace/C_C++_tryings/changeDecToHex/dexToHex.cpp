#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

char h[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
              '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

int main() {
    ll in;
    cin >> in;

    vector<int> ans;
    for (; in != 0; in /= 16) ans.push_back(in % 16);

    for (int i = ans.size() - 1; i > -1; i--) cout << h[ans[i]];
    cout << endl;
}