#include<iostream>
#include<String>
using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int a=0,b=0,c=0;
        string s;
        cin>>s;
        if(s[0]=='Y'||s[0]=='y') a++;
        if(s[1]=='E'||s[1]=='e') b++;
        if(s[2]=='S'||s[2]=='s') c++;
    if(a!=0&&b!=0&&c!=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }


return 0;
}

