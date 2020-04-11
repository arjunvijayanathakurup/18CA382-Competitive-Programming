// Simple Selection Sort Algorithm implemented in C++

#include<bits/stdc++.h>
using namespace std;

// Print function for displaying values
void print_sort(vector<int> &arr){
    for(auto i = arr.begin(); i != arr.end(); i++){
        cout<<*i<<"\t";
    }
    cout<<"\n";
}

// Sort function for performing selection sort
void selection_sort(vector<int> &arr){
    int min = 0;
    for (int i = 0; i < arr.size(); i++) {
        min = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[min],arr[i]);
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
        selection_sort(arr);

        // Printing function call
        print_sort(arr);
        T--;
    }
    return 0;
}