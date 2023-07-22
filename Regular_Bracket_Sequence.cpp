 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 string t;cin>>t;

 int n = t.size();
 int tr = 0; //regular bracket check;

 int rem = 0;//unmatch bracket
 for(int i = 0; i < n ;i++){
   if(t[i] == '('){
      tr++;
   }
   else if(t[i] == ')'){
    tr--;
   }
   if(tr < 0){
    rem++;
    tr = 0;
   }
 }
 cout<< n - rem-tr <<endl;
    return 0;
}