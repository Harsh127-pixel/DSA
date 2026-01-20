#include <iostream>
using namespace std;

int print(int n){
if(n>=0){
cout<<n<<" ";
}
print(n-1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    print(n);
    return 0;
}