#include<iostream>
using namespace std;
 bool isPalindrome(string str,int i) {
    if(i >= str.length()/2) return true;
    if(str[i] != str[str.length()-1-i]) return false;
    return isPalindrome(str, i+1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout<<isPalindrome(str,0);
    return 0;
}