#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
 /*   while (t--) {
        long long n, k;
        cin >> n >> k;
         int c = 0;
            if((n%2 && k%2 == 0)){
               cout<< "NO"<< endl;
            }
            else cout<< "YES"<< endl;
    }

    return 0;
*/
    ///tIME LIMIT

    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long c = 0;
        for(int i =1;i<=n;i++){
            if((2*i==n || k*i==n || (2*i+k*1 == n)) && k!=2){
                c++;
                break;
            }
        }
        if(c!=0) cout<< "YES"<< endl;
        else cout<< "NO"<< endl;
    }
    return 0;

}
