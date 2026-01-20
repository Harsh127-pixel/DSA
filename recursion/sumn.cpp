#include<iostream>
using namespace std;

int sum(int n) {
    if(n>0){
    int s=n+sum(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result = sum(n);
    cout<<"The sum from "<<n<<" to 0 is: "<<result<<endl;
    return 0;
}