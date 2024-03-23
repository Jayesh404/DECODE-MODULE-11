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
    for(int i=0;i<n;i++){
        if(i%2==0) arr[i]+=10;
        else arr[i]*=2;
    }
    
    return 0;
}