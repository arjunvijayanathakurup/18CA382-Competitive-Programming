// Merge sort implementation in c++

#include<bits/stdc++.h>
using namespace std;


void mergeSort(vector<int> &arr, int low, int high){
	if(low >= high)
		return;
		
	int p = 0, q = 0;
	vector<int> temp;
	for(auto m = arr.begin(); m != arr.end(); m++){
		temp.push_back(*m);
	}


	int mid = (low + high) / 2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid + 1, high);
	p = low; 
	q = mid + 1;
	int k = 0;
	for(int i = low; i <= high; i++){
		if(p > mid){
			temp[k++] = arr[q++];
		}
		else if(q > high){
			temp[k++] = arr[p++];
		}
		else if(arr[p] < arr[q]){
			temp[k++] = arr[p++];
		}
		else{
			temp[k++] = arr[q++];
		}
	}
	for(int p = 0; p < k; p++){
		arr[low++] = temp[p];
	}

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
		mergeSort(arr, 0, arr.size());
		for(auto i = arr.begin(); i != arr.end(); i++){
			cout<<*i<<"\t";
		}
		cout<<"\n";
		T--;
	}	

	return 0;
}