#include<iostream>
#include<string>
using namespace std;

int main(){
 string s;
 cin>>s;
  int c=0,o =0,z=0;
  for (int i = 0;i<s.length();i++){
  if(s[i] == '1'){
       o++;
       z= 0;
  }
  else if(s[i] == '0'){
    z++;
    o = 0;
  }
  if(o == 7 || z == 7) c=1;
}
  if(c==1)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
return 0;
}
