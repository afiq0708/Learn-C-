#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int arr[n],arr2[n],arr3[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
        arr3[i]=arr[i];
    }

    //odd and even
    //odd
    int o = 0;
    for(int i = 0;i<n;i++){
        if(arr2[i]%2==0){
            arr2[i]=arr2[i];
            o++;
        }
        else{
            arr2[i]=-1;
        }

    }
    //even
    int e = 0;
    for(int i = 0;i<n;i++){
        if(arr3[i]%2==1){
            arr3[i]=arr3[i];
            e++;
        }
        else{
            arr3[i]=-1;

        }

    }
    cout<<o;
    cout<<endl;
    //output
    int arr21[o];
    for(int i = 0;i<n;i++){
            if(arr2[i]!=-1){
                cout<<arr2[i]<<" ";
                arr21[i]=arr2[i];
            }
    }
     for(int i = 0;i<o;i++){

        cout<<arr21[i]<<" ";
            }
            cout<<endl;
                for(int j = 0;j<o-1;j++){
                    for(int p = j+1;p<o;p++){
                       if (arr21[j] > arr21[p])
                            {
                                int temp = arr21[j];
                                arr21[j] = arr21[p];
                                arr21[p] = temp;
                            }
                    }
                }
    cout<<endl;
    for(int i = 0;i<o;i++){

        cout<<arr21[i]<<" ";
            }
            cout<<endl;
    for(int i = 0;i<o;i++){


         cout<<arr2[i]<<" ";
            }
    return 0;
}

//INPUT :
//2 6 3 8 9 5

//OUTPUT :
//2 6 8 9 5 2
