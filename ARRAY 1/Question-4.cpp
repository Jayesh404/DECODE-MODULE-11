# include <iostream>
# include <limits.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter no of elements : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array : "<<endl;
    bool flag= true;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) flag=false;
        }
    }
    if(flag) cout<<"No duplicates";
    else cout<<"Duplicates";
    
    return 0;
}