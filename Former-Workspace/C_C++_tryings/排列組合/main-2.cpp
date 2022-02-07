#include <iostream>
using namespace std;

int n;

void path(int num, int arr[], bool visit[])
{
    if (num == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (!visit[i])
            {
                visit[i] = true;
                arr[num] = i + 1;
                path(num + 1, arr, visit);
                visit[i] = false;
            }
        }
    }
}

int main()
{
    cin >> n;
    int arr[n];
    bool visit[n];
    for(auto &i:visit)
        i = false;
    path(0, arr, visit);
}