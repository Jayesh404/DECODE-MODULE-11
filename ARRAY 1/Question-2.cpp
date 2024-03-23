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
    int max=INT_MIN,smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
    }
    cout<<smax;
    return 0;
}