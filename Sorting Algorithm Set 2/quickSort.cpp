// Quick sort implementation in c++

#include<bits/stdc++.h>
using namespace std;


void quickSort(vector<int> &arr, int low, int high){
	int i = low;
    int j = high;
    int pivot = arr[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(arr, low, j);
    if (i < high)
        quickSort(arr, i, high);

}

int main(){
	int T;
	cin>>T;
	while(T){
		vector<int> arr;
		int n, temp = 0;
		cin>>n;
		for(int i = 0; i < n; i++){
			cin>>temp;
			arr.push_back(temp);
		}
		quickSort(arr, 0, arr.size());
		for(auto i = arr.begin(); i != arr.end(); i++){
			cout<<*i<<"\t";
		}
		cout<<"\n";
		T--;
	}	

	return 0;
}