#include<iostream>
#include<vector>
#include<string>
using namespace std;


string chooseAndSwap(string str){
       vector<int> pos(26, -1);
        for(int i=0; i<str.size(); i++){
            int index = str[i]-'a';
            if(pos[index] == -1)
                pos[index] = i;
        }
        int i, j;
        bool flag=false;
        for( i=0; i<str.size(); i++ ){
            //Check smaller character which appears after it
            for( j=0; j<str[i]-'a' ; j++ ){
                if(pos[j] > pos[str[i]-'a']){
                     flag = true;
                     break;
                }
            }
            if(flag)break;
        }
        if(flag){
            char first = str[i]; 
            char second = 'a' + j;
            for(auto &ch:str )
            {
                if(ch == first)ch = second;
                else if(ch==second)ch = first;
            }
        }
        return str;
}


int main(){
    string str=chooseAndSwap("ccad");
    cout<<str;
    return 0;

}
