# include<iostream>
using namespace std;

int main(){

    int arr[6]={1,2,3,2,5,1};
    bool flag;
    for(int i=0;i<6;i++){
        flag=true;
        for(int j=i+1;j<6;j++){
            if(arr[i]==arr[j]) flag=false;
        }
        if(flag==true){
            cout<<arr[i];
            break;
        }
    }

    return 0;
}