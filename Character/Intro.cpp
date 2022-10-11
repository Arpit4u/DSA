 #include<iostream>
 #include<cstring>
 using namespace std;
 
 int main(){
 	char a[]="abcgdjsjbsjsnhsjs";//{'a','b','c','d','s','\0'};
 	cout<<a<<endl;
 	
// 	char b[100];
// 	cin>>b;
// 	cout<<b<<endl;
 	cout<<strlen(a)<<endl;//no. of visible characters
 	cout<<sizeof(a);//+1 because of null character
 }
