# include <iostream>
# include <limits.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter no of elements : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
    }
    cout<<min;
    return 0;
}