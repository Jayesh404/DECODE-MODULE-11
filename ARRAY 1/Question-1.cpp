# include <iostream>
using namespace std;

int main(){

    int arr[4]={1,2,3,6};
    int product=1;
    for(int i=0;i<4;i++){
        product*=arr[i];
    }
    cout<<product;

    return 0;
}