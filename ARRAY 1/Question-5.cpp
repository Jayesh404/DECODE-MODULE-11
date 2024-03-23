# include <iostream>
# include <limits.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter no of elements : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the sorted array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<"Missing element : "<<i+1;
            break;
        }
    }
    return 0;
}