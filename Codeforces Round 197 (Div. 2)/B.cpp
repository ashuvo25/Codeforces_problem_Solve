 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
  int a,b; cin>>a>>b;
  vector<int> v(b);
  for(int  i = 0;i<b;i++){
    cin>>v[i];
  }
  ll ans = 0;
  int pos = 1;
 for(int i = 0 ;i<b ;i++){
       if(v[i] >= pos){
           ans += v[i] - pos;
          // pos = v[i];
       }
       else{
        ans += (a - pos)+v[i] ;
        
       }
       pos = v[i];
  } 
  cout<< ans<<endl;
 return 0;
}