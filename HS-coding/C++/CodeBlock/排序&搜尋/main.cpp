#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int temp,i,j;

    for(i=0;i<10;i++)
    {
        cout << "please enter number" << i+1 << ":";
        cin >> a[i];
    }
    cout << endl << "your number:";
    for(i=0;i<10;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for(i=9;i>-1;i--)
    {
        for(j=0;j<i+1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout << "after sorting:";
    for(i=0;i<10;i++)
    {
        cout << a[i] << " ";
    }

   return 0;
}
