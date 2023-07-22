 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     int t;cin>>t;

      while(t--){
        int n,b;cin>>n>>b;
           vector <int> v(n) ;
          for(int i = 0;i<n;i++) cin>>v[i] ;
          sort(v.begin(),v.end());
         if(n<=1) {
            cout<< 0 <<endl;
         }
      else{
         
          int count = 1;
          int ans = 0;
          for(int i = 0;i<n-1;i++) {
              if(v[i+1] - v[i] <= b){
                 count++;
                 ans = max(ans,count);
              }
              else if(v[i+1] - v[i]>b) {
                count = 1;
                ans = max(count,ans);

              }
          }
        cout<< n - ans <<endl;
      }
      } 
 
    return 0;
}