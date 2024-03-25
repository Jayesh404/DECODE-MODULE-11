# include<iostream>
using namespace std;

int main(){

    int arr[10]={1,2,3,0,0,2,5,0,1,0};
    int i=0;
    int j=9;
    while(i<=j){
        if(arr[i]!=0 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i]==0) i++;
        if(arr[j]!=0) j--;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}