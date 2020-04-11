// Simple Selection Sort Algorithm implemented in C++

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1, 3, 8, 2, 9, 2, 5, 6};
    int n = 8, min = 0;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
            swap(arr[min],arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}