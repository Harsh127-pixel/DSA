#include<iostream>
using namespace std;

int armstrong(int n){
    int arms=0;
    while(n>0){
        int b=n%10;
        arms=arms + b*b*b;
        n=n/10;
    }
    return arms;
}

int main(){
    int n;
    cin>>n;
    cout<<armstrong(n)<<endl;
    if(n==armstrong(n)){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
    return 0;
}