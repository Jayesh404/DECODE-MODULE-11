# include <iostream>
# include <limits.h>
using namespace std;

int main(){

    int arr[5]={1,2,3,2,1};
    int i=0,j=4;
    bool flag=true;
    while(i<j){
        if(arr[i]!=arr[j]) flag=false;
        i++;
        j--;
    }
    if(flag) cout<<"Palindrome";
    else cout<<"Not Plaindrome";
    return 0;
}