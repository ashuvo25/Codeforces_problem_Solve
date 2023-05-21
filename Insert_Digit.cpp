#include<iostream>
#include<String>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        int track = 0;
        string m= to_string(d);
        for(int i = 0 ;i<n;i++){
            int x = s[i]-'0';
            if(x < d){
                s.insert(i,m);
                track ++;
            break;
            }
        }
        if(track == 0){
            s.insert(n,m);
        }
        cout<< s <<endl;
    }
return 0;
}
