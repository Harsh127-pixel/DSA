#include<iostream>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n>0){
        int b=n%10;
        rev=rev*10 + b;
        n=n/10;
    }
    return rev;
}

int checkPalindrome(int n){
    if(n==reverse(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
  
int main(){
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;

    checkPalindrome(n);
    return 0;
}