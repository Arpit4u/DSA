#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
// cout<<"comapring"<<a<<","<<b<<endl ; 
	return a<b;
}

int main(){
	
	int arr[]={3,5,4,7,8,9,4,2,5,5,8,9,1};
	int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n,compare);
    //to find greater no using below syntax 
//    sort(arr,arr+n,greater<int>());

//	reverse(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
