 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
    while(t--) {
        ll n;cin>> n;
    ll ans,sum;
    ans = 0;
    sum = 0;
         vector<ll> v(n+1,0);
         
          ll maxV = INT_MIN;
         for(ll i=0;i<n;i++){
            cin>> v[i];
            maxV = max(maxV,v[i]);
         }
         if(maxV <=0){
            cout<<maxV <<endl;
            continue;
         }
         if(maxV>0) ans = maxV;
         ll even_sum = 0;
         ll odd_sum = 0;
         ll a = 0; ll b = 0;
         vector<ll>even ;
         vector<ll>odd ;
         for(ll i= 0 ;i<n;i++) {
            if(i%2 == 0 ) {
                even.push_back(v[i]);
            }
            else 
               odd.push_back(v[i]);
         }

         int evenC = even.size();
         int oddC = odd.size();
     
        
        for(int i = 0;i< evenC;i++){
          if(even[i] > 0)  sum+=even[i];
            maxV = max(maxV,sum);
        }
        sum = 0;
        for(int i = 0;i< oddC;i++){
           if(odd[i] > 0) sum+=odd[i];
            maxV = max(maxV,sum);
        }
    ll max_ele = max(ans,even_sum);
   ans = max(odd_sum,max_ele);

         cout<< maxV<<endl;
    }

    return 0;
}