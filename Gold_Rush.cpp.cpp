#include <bits/stdc++.h>
using namespace std;

bool True_False(int n,int m){
     if(m == n) return true;
     if(m > n || n%3!=0) return false;
     return True_False(n/3,m)||True_False(n-n/3,m);

}
void print_Fun()
{
    int n,m;cin>>n>>m;
    bool x = True_False(n,m);
    if(x) cout << "YES" <<endl;
    else cout<< "NO" <<endl;
}
int main() {

          int t;cin>>t;
          while(t--){
                print_Fun();
            }

    return 0;
}
