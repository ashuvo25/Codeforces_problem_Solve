 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 string t;cin>>t;
 string m = "";
   for(int  i =0;i<t.size();i++){
       if(t[i]!= '+') m+=t[i];
   }
   sort(m.begin(),m.end());
   t = "";
   int s = m.size();
   for(int i= 0;i<m.size();i++){
         t+=(m[i]); 
         if(i<m.size()-1)
         t+='+'; 
   }
   cout<<t<< endl;
    return 0;
}
