#include<iostream>
using namespace std;

int LinearSearch(int arr[],int v,int n){
   for(int i=0;i<n;i++){
    if( arr[i] == v){
      return i;
    }
   }
   return -1;
}

int main(){
int arr[]={1,2,4,5,6,7,8,9};
int n=sizeof(arr)/sizeof(int);
// int n=8;
int v;
cin>>v;
int a=LinearSearch(arr,v,n);
if(a!=-1){
  cout<<"Elemnt present at index"<<a;
}
else{
  cout<<"Element not Found";
}
return 0;
}
