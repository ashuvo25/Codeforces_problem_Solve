 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
   map<string,int> m;
   vector<pair<string,int>> m1;
  // int maxi = 0;
    for (int i = 0; i < t; i++)
    { 
       string s;cin>>s;
       int a; cin>>a;
       m[s] += a;   
       m1.push_back(make_pair(s,m[s]));
    }
    int maxi = INT_MIN;

    for(auto &it : m){
        maxi = max(maxi,it.second);
    }
//map<string,int> mm;
string winner = "";
//map<string,int> :: iterator it1;
// int i = 0;
//  for(auto &it: m1){
    // string q =  it.first;
    // int w = it.second;
  //  mm[q] += w;
        
        // if(maxi == m1[i].second){
        // winner=winner+m1[i].first;
        // break;
        // }
//}
 for (int i = 0; i < t; i++)
 {
    pair<string,int> k = m1[i];
    if(m[k.first] == maxi && k.second >= maxi){
        cout << k.first <<endl;
        break;
    }
 }
 
 //cout<< maxi <<endl;
    
    return 0;
}