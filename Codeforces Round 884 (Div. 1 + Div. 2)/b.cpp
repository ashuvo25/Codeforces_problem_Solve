 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
// bool isPrime(int num) {
//     if (num <= 1)
//         return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0)
//             return false;
//             break;
//     }
//    // return true;
// }

int main()
{
 int t;cin>>t;

  while(t--) {
    ll n;cin>> n;
        vector<int> v(n,0);
         

      if(n<=1) {
        v[0] = 1;
        }
        if(n == 2){
           v[0] = 2;
           v[1] = 1;
           
        }
       
        if(n>2){
        v[0] = 3;
        v[n-1] = 2;
         v[n/2] = 1;
         int c = 4;
        for(int i = 1; i< n-1;i++){
           if( i == n/2) continue;

           v[i] = c;
           c++;
        }
        }

//   sort(v.begin(), v.end(), [](int a, int b) {
//     // if (isPrime(a) && !isPrime(b))
//     //     return false;
//     if (!isPrime(a) && isPrime(b))
//         return true;
//        // else return false;
//    // return a > b;  
// });
    for(int  i = 0;i< n ; i++){
        cout << v[i] << " " ;
    }
    cout<< endl;
    }
  
    return 0;
}