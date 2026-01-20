#include<iostream>
#include<math.h>
using namespace std;

int count(int n){
    int count = (int)(log10(n)+1);
    return count; 
}

int countDigits(int n){
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<"No. of digits are:"<<count(n)<<endl;
    cout<<countDigits(n);
    return 0;
}