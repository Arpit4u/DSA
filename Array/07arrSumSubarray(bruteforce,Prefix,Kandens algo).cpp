#include<iostream>
using namespace std;
//Brute Force Approach O(N^3)
int large(int arr[],int n){
	int large;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=arr[k];
			}
			large=max(large,sum);
		}
	}
	return large;
}
//Prefix Approach O(N^2)
int large2(int arr[],int n){
	int prefix[n]={0};
	prefix[0]=arr[0];
	
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+arr[i];
	}
	int large=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=i>0 ?prefix[j]-prefix[i-1]:prefix[j];
		    large=max(large,sum);
		}
		
	}
	return large;
}
//Kandens Algorithm
//current sum= adding all sum    
//whenever value of array comes less than 0 then make currentsum =0
//maximum sum will be checked and printed
int large3(int arr[],int n){
	int cs=0;
	int l=0;
	for(int i=0;i<n;i++){
		cs+=arr[i];
		if(cs<0){
			cs=0;
		}
		l=max(l,cs);
	}
	return l;
}
int main(){
	
	int arr[]={-2,3,4,-1,5,-12,6,1,3};
	int n=sizeof(arr)/sizeof(int);
	
	int a=large(arr,n);
	int b=large2(arr,n);
	int c=large3(arr,n);
	cout<<"Largest Subarray Sum(Brute Force)"<<a<<endl;
	cout<<"Largest Subarray Sum(Prefix)"<<b<<endl;
	cout<<"Largest Subarray Sum(Kadens Algorithm)"<<c<<endl;
}
