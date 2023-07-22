 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 int t;cin>>t;
    while(t--){
        int n;cin>> n;
        int maxi = INT_MIN;
        int c = 0;
        int arr[n];
        int cua[n];
       for(int i = 1;i<=n;i++){
          cin>> arr[i] >>cua[i];
       }
       for(int i = 1;i<=n;i++){
           if(arr[i]<=10) {
                maxi = max(maxi,cua[i]);
        }
       }
       int index =0;
        for(int i = 1;i<=n;i++){
         if(maxi == cua[i]){
            index = i;
         }
       }
  
      
        cout<<index<<endl;
       // maxi = INT_MIN;
    }
 
    return 0;
}