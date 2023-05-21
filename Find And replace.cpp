#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t!=0){
    int n;
    cin>>n;
    string s;
    cin >> s;
    int co = 0;
    for(int i = 0;i<n;i++){
      char a1 = s[i];
         if(s[i] == a1){

                if(s[i] == s[i+1]){
                   s[i +1] = '0';
                }
                 s[i] = '0';

         }
         else if(s[i] == a1){
             s[i] = '1';
             if(s[i] == s[i+1]){
                s[i+1] = '1';
             }

         }
    }
      for (int i = 0; i < n; i++) {

         if(s[i] == s[i+1]){
            co ++;
         }
    }
    if(co != 0){
        cout<< "\"NO\"" <<endl;
    }
    else{
      cout<< "\"YES\"" <<endl;
    }
    cout<< s <<endl;
    t--;
    }



}

