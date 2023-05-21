#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int  t;
    cin >> t;
     while(t>0){
            int rep=0;
           int n;
           cin>> n;
           int possible_number=n-1;
           string s;
           cin>> s;
           for(int i=0;i<n-2;i++){
            if(s[i]==s[i+2]) rep++;
           }
           cout<< possible_number-rep<<endl;
           t--;
     }
return 0;
}
