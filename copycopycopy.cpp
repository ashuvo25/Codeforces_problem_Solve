 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
     while (t--){
        int n;cin>>n;
        set<int> s;

        for (int  i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        

        cout<< s.size()<<endl;

     }
  
    return 0;
}