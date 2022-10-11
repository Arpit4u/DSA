#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.get();
	char sentence[1000];
	char largest[1000];
	
	int large_len=0;
	while(n--){
	  cin.getline(sentence,1000);
	  int len= strlen(sentence);
	  if(len>large_len){
	  	large_len=len;
	  	strcpy(largest,sentence);
	  }
 	}
	
	cout<<"Largest Value is:"<<largest<<endl;
	return 0;
} 
