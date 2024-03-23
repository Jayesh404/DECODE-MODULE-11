# include <iostream>
# include <limits.h>
using namespace std;

int main(){

    int arr[5]={1,2,3,2,3};
    int elem;
    bool flag;
    for(int i=0;i<5;i++){
        flag=true;
        for(int j=0;j<5;j++){
            if(arr[i]==arr[j] && i!=j) flag=false;
        }
        if(flag==true) elem=arr[i];
    }
    cout<<elem;
    return 0;
}