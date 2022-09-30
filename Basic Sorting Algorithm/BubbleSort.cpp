#include<iostream>
using namespace std;


int bubble(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
		    if(arr[i]>arr[j]){
			swap(arr[i],arr[j]);
		}
		}		
	}
}

int main(){
	int arr[]={5,7,4,6,9,2};
	int n=sizeof(arr)/sizeof(int);
	bubble(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
