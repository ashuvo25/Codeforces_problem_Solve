 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     cout<<fixed<<setprecision(10);
     ll n,l;cin>>n>>l;
     vector<ll>v(n);
     for(int i = 0;i<n;i++){
         cin>>v[i];
     }
   sort(v.begin(),v.end());
  // vector<double>dis;
   int x = 0;
   for(int i = 0 ;i<n-1;i++){  
       if(abs(v[i]  - v[i+1]) > x)
               x= abs(v[i]  - v[i+1]);
    }
    double maxi = v[0];
    double val ,val1 ;
    val1 = abs(v[n-1] - l);
    val = x/2.0;
    double ans = max(maxi,val);
    ans = max(ans,val1);

   cout<< ans<<endl;
 

    return 0;
}