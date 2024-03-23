# include <iostream>
# include <limits.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter no of elements : "<<endl;
    cin>>n;
    int arr[n];
    bool flag=true;
    cout<<"Enter elements of the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]) flag=0;
    }
    if(flag) cout<<"Sorted";
    else cout<<"Not Sorted";
    
    return 0;
}