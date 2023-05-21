#include<iostream>
using namespace std;


int main(){
    int y;
    cin>>y;
    while(1){
        y = y+1;
        int a,b,c,d;
        a= y%10;
        y = y/10;
         b= y%10;
        y = y/10;
         c= y%10;
        y = y/10;
         d= y%10;
        y = y/10;
       // cout<< a << " "<<b << " "<<c<<" "<<d<<endl;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            y = y*10;
            y = y+d;
             y = y*10;
             y = y+c;
              y = y*10;
             y = y+b;
              y = y*10;
             y = y+a;
             cout<< y <<endl;
             return 0;
        }
        else{
               y = y*10;
            y = y+d;
             y = y*10;
             y = y+c;
              y = y*10;
             y = y+b;
              y = y*10;
             y = y+a;
        }


    }

return 0;
}
