#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count = 0;
    while(t!=0){
        if(t>=100&& !(t<100)){
           count = count+ t/100;
           t = t%100;
        }
        else if(t>=20&&t<100) {
           count = count+ t/20;
            t = t%20;
        } else if(t>=10&&t<20) {
            count = count+ t/10;
            t = t%10;
        } else if(t>=5&&t<10) {
           count = count+ t/5;
           t= t%5;
        }
        else if(t>=1&&t<5){
            t=t-1;
            count++;
        }
    }
     cout<< count << endl;
return 0;
}
