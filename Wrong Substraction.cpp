#include<iostream>
using namespace std;

int main(){

   int n,k;

   cin>>n>>k;
     int x =0;
   while(k--){
        x = n%10;
        if(x!=0)
        n = n-1;
        else
            n = n/10;
   }
   cout<< n<<endl;

return 0;
}
