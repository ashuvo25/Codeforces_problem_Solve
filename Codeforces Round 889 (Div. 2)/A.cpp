 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
   while(t--){
    int n ;cin>>n;
    vector<int> v(n);
    for(int i = 0;i< n;i++ ){
        cin>>v[i];
    }
    int count = 0;
    for(int  i = 0;i< n;i++ ){
     if(v[i] == i+1) count ++;
    }
    if(count%2 == 0) 
    cout<< count/2<<endl;
    else 
    cout<< count/2+1<<endl;

   }

    return 0;
}