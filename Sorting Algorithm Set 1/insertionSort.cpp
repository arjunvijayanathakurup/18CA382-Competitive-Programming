// Simple Insertion Sort algorithm implementation in C++

#include<bits/stdc++.h>
using namespace std;

// Print function for displaying values
void print_sort(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

// Sort function for performing insertion sort
void insertion_sort(vector<int> &arr){
    int key = 0, j = 0;
    for (int i = 1; i < arr.size(); i++) {
        key = arr[i];
        for(j = i; ((j > 0) && (key < arr[j - 1])); j--){
            swap(arr[j], arr[j - 1]);
        }
        arr[j] = key;
    }
}

int main(){
    // Insert testcase
    int T;
    cin>>T;

    while(T){
        // Initialize vector array
        vector<int> arr;
        int n = 0, temp_var = 0;
        // Input size of array
        cin>>n;
        // Take user input values
        for(int i = 0; i < n; i++){
            cin>>temp_var;
            arr.push_back(temp_var);
        }

        // Sorting function call
        insertion_sort(arr);

        // Printing function call
        print_sort(arr);
        T--;
    }
    return 0;
}