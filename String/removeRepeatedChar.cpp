#include<iostream>
#include<vector>
#include<string>

using namespace std;

void removeDuplicate(string str){
	string res="";
	res+=str[0];
	for(int i=0;i<str.size()-1;i++){
		if(str[i]!=res.back()){
			res+=str[i];
		}
	}
	cout<<res;
}


int main(){
	string str="rrepeatedcccharrractttters";
	removeDuplicate(str);
	return 0;
}
