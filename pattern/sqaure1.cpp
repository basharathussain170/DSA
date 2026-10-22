#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number\n";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j >= 1; j--)
        {
            // cout<<"*"<<" ";
            cout << " " << " ";
        }
        for (int j = 0; j < 1; j++)
        {
            cout << "#" << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"1"<<" ";
            // cout << " " << " ";
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"2"<<" ";
            // cout << " " << " ";
        }
        if (i != 0)
        {
            for (int j = 0; j < 1; j++)
            {
                cout << "#" << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // cout<<"*"<<" ";
            cout << " " << " ";
        }
        for (int j = 0; j < 1; j++)
        {
            cout << "#" << " ";
        }
        for (int j = n - i - 2; j >= 1; j--)
        {
            cout<<"3"<<" ";
            // cout << " " << " ";
        }
        for (int j = n - i - 3; j >= 1; j--)
        {
            cout<<"4"<<" ";
            // cout << " " << " ";
        }
        if (n-i!=2)
        {
            for (int j = 0; j < 1; j++)
            {
                cout << "#" << " ";
            }
        }
        // cout<<i;
        cout << endl;
    }
    return 0;
}
