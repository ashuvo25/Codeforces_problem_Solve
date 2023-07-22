#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
   int t;cin>>t;
   vector<int> v(t);
    // v[0] = 0;
   for (int i = 1; i <=t; ++i)
    {
       cin>>v[i];
    } 
 
int c = 0;
int d = 0;
int k = 0;
    for (int i = 1; i <= t; ++i)
    {
 
       if(v[i] % 2 == 0)c++;
       else d++;
         
    }
    
    if(c>d){
     // cout<< "EVEN" <<endl;
      for(int i = 1;i<=t;i++){
         if(v[i]%2!=0){
            cout<< i <<endl;break;
         }
      }
    }
    else{
        for(int i = 1;i<=t;i++){
         if(v[i]%2==0){
            cout<< i <<endl;break;
         }
      }
    }
  
return 0;
 
}