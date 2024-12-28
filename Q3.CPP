#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter your row number: ";
    cin >> row;
    cout << "Enter your Column number: ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=i; j++)
        {
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
