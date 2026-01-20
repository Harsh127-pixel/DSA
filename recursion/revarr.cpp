#include<iostream>
#include<algorithm>
using namespace std;

void rev(int l, int r, int arr[]){
    if(l>=r){
        return;
    }
    swap(arr[l], arr[r]);
    rev(l+1, r-1, arr);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    rev(0, n-1, arr);
    cout<<"Reversed array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}