#include<iostream>
#include<String>
using namespace std;

int main(){
     string s;
     cin>>s;
     cout<< s <<endl;
     int h=0,e=0;
      string m = "hello";
     for(int i=0;i<s.length();i++){

      if(s[i] == m[h]){
        h++;
        e++;
      }
     }
     if(e == 5) cout<< "YES"<<endl;
     else cout<< "NO"<<endl;

return 0;
}
