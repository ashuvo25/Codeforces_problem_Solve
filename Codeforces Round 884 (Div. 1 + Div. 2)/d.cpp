 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
    
    while(t--){
        ll n;cin>>n;
       ll m = 1;

       while(n%m ==0){
        
            m ++; 
        
       }
        
        for(int i = 0;i<n;i++){
            cout<<char( 'a' + i%m) ;
          
        }
        cout <<endl;
    }

    return 0;
}