#include<iostream>
using namespace std;

int insertion(int arr[],int n){
//	for(int i=1;i<n;i++){
//		int temp=arr[i];
//		for(int j=0;j<=i;j++){
//			if(temp<arr[j]){
//				swap(temp ,arr[j]);
//			}
//		}
//	}
 for(int i=1;i<n;i++){
 	int current=arr[i];
 	int prev= i-1;
 	//loop to find  the right index where  the current element should be inserted 
 	while(prev>=0 and arr[prev]>current){
 		arr[prev+1]=arr[prev];
 		prev=prev-1;
	 }
	 arr[prev+1]=current;
 }
}

int main(){
	
	int arr[]={9,5,1,4,7,5,6,-2};
	int n=sizeof(arr)/sizeof(int);
	
	insertion(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
