 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
 while(t--){
    vector<char> c1(3);
    vector<char> c2(3);
    vector<char> c3(3);
 for (int i = 0; i < 3; i++)
 {
     cin>> c1[i];
 }
 
 for (int i = 0; i < 3; i++)
 {
     cin>> c2[i];
 }
 
 for (int i = 0; i < 3; i++)
 {
     cin>> c3[i];
 }
  char c = '.';
 
    if(c1[0] == c1[1] && c1[1] == c1[2] && c1[0] !='.'){
       c = c1[0]  ;
    }
    if(c2[0] == c2[1] && c2[1] == c2[2]  && c2[0] !='.' ){
        c = c2[0];
        
    }
    if(c3[0] == c3[1] && c3[1] == c3[2]  && c3[0] !='.'){
        c  = c3[0];
        
    }

    if(c1[0] == c2[1] && c2[1] == c3[2] ){
       c =  c1[0] ;
        
    }
    if(c3[0] == c2[1] && c2[1] == c1[2]){
       c =  c3[0] ;
       
    }
    if(c1[0] == c2[0] && c2[0] == c3[0]  && c1[0] !='.') {
        c = c1[0];
    }
    if(c1[1] == c2[1] && c2[1] == c3[1] && c1[1] !='.') {
        c = c1[1];
    }
    if(c1[2] == c2[2] && c2[2] == c3[2] && c1[2] !='.') {
        c = c1[2];
    }
    
    if(c == '.') cout <<"DRAW" <<endl;
    else cout<< c<<endl;
   
 }


    
}
