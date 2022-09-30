#include<iostream>
#include<vector>
using namespace std;

void counting(int arr[],int n){
	int large=-1;
	for(int i=0;i<n;i++){
		large=max(large,arr[i]); 
	}
	vector<int> freq(large+1,0);
	
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
	int j=0;
	for(int i=0;i<=large;i++){
		while(freq[i]>0){
			arr[j]=i;
			freq[i]--;
			j++;
		}
	}
	return;
}

int main(){
	int arr[]={3,4,8,4,6,7};
	int n=sizeof(arr)/sizeof(int);
	counting(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
