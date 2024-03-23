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
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            s1+=arr[i];
        }
        else s2+=arr[i];
    }
    cout<<s1-s2;
    return 0;
}