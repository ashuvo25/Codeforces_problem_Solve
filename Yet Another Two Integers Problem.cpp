#include<iostream>
using namespace std;

int main(){

  int t;cin>>t;
  int s;
  while(t--){
    int a,b;cin>>a>>b;

          if(a==b) cout<< 0 <<endl;
          else{
              s= abs(a-b)%10;
              if(s==0){
                cout<< (abs(a-b)/10) <<endl;
              }
              else{
                s= (abs(a-b)/10)+1;
                cout<< s<<endl;
              }
          }
  }


return 0;
}
