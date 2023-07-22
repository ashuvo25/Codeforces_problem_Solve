 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
   while(t--){
    int n;cin>>n;
   int c = 0;
    for(int i = 0;i<n ;i++){
        int a,b;
        cin>> a>>b ;
        if(a>b) c++;
    }
    cout<< c<<endl;
   }

    return 0;
}