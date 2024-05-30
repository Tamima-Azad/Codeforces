#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin,s);
    stringstream ss(s);
    //ss<<s;
    string word;
   // stringstream sss();
    while(ss>>word){
        reverse(word.begin(),word.end());
    
    if((word[0]>='a'&&word[0]<='z')||(word[0]>='A'&&word[0]<='z')) 
         cout<<word;
          cout<<" ";
     }
     cout<<endl;

}