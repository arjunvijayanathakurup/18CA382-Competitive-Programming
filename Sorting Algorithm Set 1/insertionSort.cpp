// Simple Insertion Sort algorithm implementation in C++

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1, 3, 8, 2, 9, 2, 5, 6};
    int n = 8, key = 0, j = 0;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        for(j = i; ((j > 0) && (key < arr[j - 1])); j--){
            swap(arr[j], arr[j - 1]);
        }
        arr[j] = key;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}