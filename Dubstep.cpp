#include<iostream>
#include<String>
using namespace std;


int main(){
     
     string s;
        cin>> s;
         string dum = "WUB";
           int a = 0;
            for(int i=0;i<s.length();i++){
                if(s[i]==dum[a]){
                    a++;
                }
                else{
                    cout<< s[i];
                    a = 0;
                }   
            }
        cout<<endl;     
    return 0;
}