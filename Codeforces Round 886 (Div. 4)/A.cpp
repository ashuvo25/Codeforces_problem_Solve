 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     int t;cin>>t;
     while(t--){
        int a,b,c;cin>>a>>b>>c;
int sum1  = a+b;
int sum2 = a+c; 
int sum3 = b+c;

   if(sum1>=10||sum2>=10||sum3>=10)
      cout<< "yes"<<endl;
       else cout<< "No"<<endl;
     }
    return 0;
}