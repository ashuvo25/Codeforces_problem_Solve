#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    int a[n];
    int a2[n+1] = {0};
        for(int i = 0;i<n;i++){
            cin>>a[i];
            int temp = a[i];
            a2[temp]+=1;
        }
        int num = 0;
        int cou = 0;
        for(int i = 0;i<n+1;i++){
            if(a2[i]>=a2[num]){
                num = i;
            }
        }
        cou = a2[num];
       if (num>=0&&cou>=3 ) cout<<num<<endl;
       else cout<< -1 <<endl;
    }
return 0;
}
