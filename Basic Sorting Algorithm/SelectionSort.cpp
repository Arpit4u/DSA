#include<iostream>
using namespace std;

void selection(int arr[],int n){
	
	for(int i=0;i<n;i++){
	
	int pos=arr[i];
	for(int j=i+1;j<n;j++){
		int k=0;
		if(arr[j]<arr[j+1]){
			k=arr[j];
		}
		if(k<pos){
			swap(arr[k],arr[pos]);
		}
	}
	}
}

int main(){
	int arr[]={3,2,1,5,4};
	int n=sizeof(arr)/sizeof(int);
	
	selection(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
