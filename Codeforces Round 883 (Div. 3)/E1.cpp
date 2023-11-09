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
    int  q = 0;
    for(int i = 2;i<sqrt(n);i++){
     int w = 1;
        while ( w <= n){
            if((w == n))  q = 1;
            w = w * i + 1;
        }
    }
   if(q == 0) cout<< "NO" <<endl;
   else cout<< "YES" <<endl;
  }
    return 0;
}
