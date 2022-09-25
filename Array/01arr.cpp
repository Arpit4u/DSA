#include<iostream>
using namespace std;
int print(int *arr,int n){
	cout<<"In Function"<<sizeof(arr)<<endl;
    // int n=sizeof(arr)/sizeof(int);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	cout<<"In Main"<<sizeof(arr)<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	print(arr,n);
}
