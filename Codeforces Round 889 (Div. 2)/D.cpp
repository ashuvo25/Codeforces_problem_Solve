 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int n ;cin>> n;
 vector<int> v(n);
 for(int i=0;i<n;i++ ){
    cin>> v[i];
 }
 int count = 0;
  if(v[0] == 0){
    cout<< 0 <<endl;
    return 0;
   }
   else{
    for(int i =0; i<n;i++){
        if(v[i] < n) {
        count+=(n-1);
   }
   else break;
 }

   }

   cout<< count+1 << endl;

    return 0;
}