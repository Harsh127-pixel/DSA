#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int hash[26] = {0};
    for (int i = 0; i < str.length(); i++) {
        hash[str[i] - 'a']++;
    }

    char q;
    cin >> q;
    cout << hash[q - 'a'] << endl;
    return 0;
}