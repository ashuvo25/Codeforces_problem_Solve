 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
//ll N = sqrt(1e12+10);
ll N = 1000000;
int main(){
  vector<ll> Prime(N,0);
 Prime[0] = Prime[1] = 0;
  for (ll i = 2; i <= N; i++)
  {
     if(Prime[i] == 0){
    for (ll j = 2; j * i <= N; j++)
       {
           Prime[j*i] +=1; 
       }
    }
  }
    ll n;cin>>n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)  { 
       cin>>v[i]  ; 
    }
    for(int i = 0; i<n ;i++){
      ll sq = sqrt(v[i]);
       //cout << sq<< " " << Prime[sq] << endl;
        if(Prime[sq] == 0 && sq*sq == v[i] && v[i]!=1){
          cout<<"YES"<<endl;
        }
        else cout << "NO" <<endl; 
    }

    return 0;
} 
