// TODO
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define pb push_back

int main() {
    ll b;
    cout << "please enter your bits number:";
    cin >> b;
    while (b < 0) {
        cout << "please reenter a number:";
        cin >> b;
    // If I use "if" & "else", the code will increase about 1 line (4 -> 5)
    /*
    while(cin >> b) {
        if(b < 0)
            cout << "please reenter a number";
        else
            break;
    }
    */
    // Also, the code after is much more readable.
    }

    ll in;
    /*
    cin >> in;
    while(in){
        cin >> in;
    }
    */
    // code above consume more lines
    while (cin >> in) {
        if (!in) break;
        vector<bool> comp(b);
        bool m{};
        if (in < 0) m = true, in++;

        for (ll i = 0; in != 0; i++, in /= 2) comp[i] = in % 2;

        if (m) {
            for (ll i = 0; i < comp.size(); i++) comp[i] = comp[i] ^ 1;
            comp[comp.size() - 1] = 1;
        }

        for (ll i = comp.size() - 1; i > -1; i--) cout << comp[i];

        cout << endl;
    }
}