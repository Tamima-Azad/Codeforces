#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin,s);
    // stringstream ss;
    // ss<<s;
    // string word;
    // int cnt=0;
    // while(ss>>word){
    //    if((word[0]>='a'&&word[0]<='z')||(word[0]>='A'&&word[0]<='z')) 
    //     cnt++;
    //     //cout<<word<<endl;
    // }
    int cnt=0;
    bool found=false;
    //cout<<isalpha('A')<<endl;
    for(char c: s){
        if(isalpha(c)){
            if(found==false){
                cnt++;
                
            }
            found=true;
        }
        else{
                found=false;
            }
    }
    cout<<cnt<<endl;
}