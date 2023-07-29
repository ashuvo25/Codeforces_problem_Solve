 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
while(t--){
    ll n;cin>> n;
    ll ans  =1;
    ll count = 0;
    for(ll  i  = 1 ;i< 1e6;i++ ){
      if(n%i == 0 ) {
        count++;
        ans = max(ans,count);
      }
      else {
        count = 0;
      }
    }
    cout<< ans<<endl;
}

    return 0;
}