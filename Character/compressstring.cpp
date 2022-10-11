#include <bits/stdc++.h>
using namespace std;

string compress(string s){
	int n=s.length();
	string output;
	for(int i=0;i<n;i++){
		int count=1;
		while(i<n-1 and s[i+1]==s[i]){
			count++;
			i++;
		}
		output=output+s[i];
		output=output+to_string(count);
	}
	if(output.length()>s.length()){
		return s;
	}
	return output;
}
int main(){
	string str1="aaaabbbccs";
	cout<<compress(str1)<<endl;
	
	string str2="abbcccdddd";
	cout<<compress(str2)<<endl;
	
	return 0;
}
