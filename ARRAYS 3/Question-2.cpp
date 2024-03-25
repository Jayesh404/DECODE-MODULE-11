# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int go(vector<int>& b,int i,int size){
    int carry=0;
    for(int j=0;j<size;j++){
        int product=b[j]*i+carry;
        b[j]=product%10;
        carry=product/10;
    }
    while(carry){
        b[size]=carry%10;
        carry/=10;
        size++;
    }
    return size;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    vector<int> a(500,0);
    a[0]=1;
    int size=1;

    for(int i=2;i<=n;i++){
        size=go(a,i,size);
    }
    reverse(a.begin(),a.begin()+size);
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
}