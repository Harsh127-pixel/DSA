#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int temp[r - l + 1];
    int left=l;
    int right=m+1;
    while (left<=m && right<=r) {
        if (arr[left]<=arr[right]) {
            temp[left + right - l - m - 1] = arr[left];
            left++;
        } else {
            temp[left + right - l - m - 1] = arr[right];
            right++;
        }
    }
    while (left<=m) {
        temp[left + right - l - m - 1] = arr[left];
        left++;
    }
    while (right<=r) {
        temp[left + right - l - m - 1] = arr[right];
        right++;
    }
    for (int i = l; i <= r; i++) {
        arr[i] = temp[i - l];
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}