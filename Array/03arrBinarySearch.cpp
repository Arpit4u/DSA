#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int a){
	int s=0;
	int e=n-1;
	while(s<=e){
		int m=(s+e)/2;
		if(arr[m]==a){
			return m;
		}
		else if(arr[m]>a){
			e=m-1;
		}
		else {
			s=m+1;
		}
	}
	return -1;
}

int main(){
	int arr[]={1,2,3,5,6,8,9};
	int n=sizeof(arr)/sizeof(int);
	int a;
	cin>>a;
	int index=BinarySearch(arr,n,a);
	if(index!=-1){
		cout<<index<<endl;
	}
	else{
		cout<<"Not Found"<<endl;
	}
}
