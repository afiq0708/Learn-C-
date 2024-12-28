#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int s = n;
    for(int i = 0 ; i < s ; i++ )
    {
        cin>>arr[i];
    }
    n-=1;
    for(int i = 0; i<s; i++)
    {
        int temp = arr[i],temp2 = arr[n];
         arr[n]=temp;
        arr[i]=temp2;

        n--;
    }
    for(int i = 0 ; i < s; i++ )
    {
        cout<<arr[i];
    }
    return 0;
}
