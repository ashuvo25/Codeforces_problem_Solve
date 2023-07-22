 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
     string s[t];
      while(t--){
        string cut ="";
        for(int i = 0;i<8;i++){
             string m;cin>>m;
             for(int j=0;j<8;j++){
                if(m[j] != '.'){
                    cut+=m[j];
                }
             }
        }
      cout<< cut<< endl;

      }

    return 0;
}