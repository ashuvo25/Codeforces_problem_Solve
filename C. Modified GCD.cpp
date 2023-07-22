 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll gcd(ll a,ll b){
 if (a%b == 0) return b;
  return gcd(b,a%b);
}

int main()
{
 
ll a,b;cin>>a>>b;
int t;cin>>t;

ll x1 = gcd(a,b);
 vector<int> v;
 for(ll i = 1 ;i*i<=x1;i++){
    if(x1 % i == 0){
        v.push_back(i);
        if(x1/i != i)v.push_back(x1/i);
    }
   }
// for (auto i = 0; i < v.size(); i++)
// {
//     cout<< v[i] << " ";
// }

while(t--){
   ll x,y;  cin>>x>>y;
   int ans = -1;
   for(auto a:v){
    if(a>=x&&a<=y){
        ans = max(ans,a);
    }
   }
   cout<< ans<<endl;
}
    return 0;
}