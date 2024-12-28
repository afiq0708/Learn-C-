#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter your row number: ";
    cin >> row;
    cout << "Enter your Column number: ";
    cin >> col;

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

