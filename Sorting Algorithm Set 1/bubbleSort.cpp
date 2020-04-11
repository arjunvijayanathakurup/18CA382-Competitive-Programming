// Simple Bubble sort algorithm implemented in C++

#include<bits/stdc++.h>
using namespace std;

// Print function for displaying values
void print_sort(vector<int> &arr){
    for(auto i = arr.begin(); i != arr.end(); i++){
        cout<<*i<<"\t";
    }
    cout<<"\n";
}

// Sort function for performing bubble sort
void bubble_sort(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < (arr.size()-1); j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
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
        bubble_sort(arr);

        // Printing function call
        print_sort(arr);
        T--;
    }
    return 0;
}
