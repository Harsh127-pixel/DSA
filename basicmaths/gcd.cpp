#include<iostream>
using namespace std;

int gcd(int a, int b){
    if (a==0) return b;
    else if (b==0) return a;
    else{
        for(int i=min(a,b); i>=1; i--){ //O(min(a,b))
            if(a%i==0 && b%i==0){
                return i;
            }
        }
    }
}

int gcd_sub(int a, int b){ //O(log(min(a,b)))
    if(a==0) return b;
    else if(b==0) return a;
    else if(a>b) return gcd_sub(a-b,b);
    else  return gcd_sub(a,b-a);
}

int gcd_euclidean(int a, int b){ //O(log(min(a,b)))
    if(a==0) return b;
    else return gcd_euclidean(b%a, a);
}

int gcd_array(int arr[], int n){
    int result = arr[0];
    for(int i=1; i<n; i++){
        result = gcd_euclidean(arr[i], result);
        if(result == 1){
            return 1;
        }
    }
    return result;
}


int main(){
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b);
    cout<<endl;
    cout<<gcd_sub(a,b);
    cout<<endl;
    cout<<gcd_euclidean(a,b)<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    cout<<endl;
    cout<<gcd_array(arr, n);
    return 0;
}