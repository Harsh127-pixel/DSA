#include<iostream>
using namespace std;

int print(int i, int n){
    if(i<=0){
        return n;
    }
    cout<<i<<" ";
    return print(i-1, n);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Printing from "<<n<<" to 1: ";
    print(n, n);
    return 0;
}