#include<iostream>
using namespace std;

int main(){
	 char sentence[1000];
	 char temp=cin.get();
	 
	 int len=1;
	 while(temp!='\n'){  //\n is the last value of char denoting null
	 	len++;
	 	cout<<temp;
	 	temp=cin.get();
	 }
	 cout<<endl;
	 cout<<"Lenght"<<len<<endl;
}

