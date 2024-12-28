#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter your row number: ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=i; j++)
        {
                if(j%2==0) {
                    cout<<"1";
                }
                else if(i%2==0){
                     cout<<"0";
                }
                else{
                   cout<<"0";
                }
        }
        cout<<endl;
    }
    return 0;
}

