#include<iostream>
using namespace std;

void printprime(int n){
    int flag=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            flag++;
        }
    }
    if (flag==2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }
}

void printprimeopt(int n){
    int flag=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            flag++;
            if(n/i!=i){
                flag++;
            }
        }
    }
    if (flag==2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }
}

int main(){
    int n;
    cin>>n;
    printprime(n);
    cout<<endl;
    printprimeopt(n);
    return 0;
}