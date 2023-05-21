#include<iostream>
using namespace std;

int main(){

   int n;
   cin>>n;
   int arr[100][100];
   for(int i =0 ;i<n;i++){
    for (int j = 0;j<3;j++){
        cin>> arr[i][j];
    }
   }
    int sum1 = 0 ,sum2 =0;
    for(int j =0 ;j<3;j++){
    for (int i = 0;i<n;i++){
       if(arr[i][j]<0){
        sum1 = sum1 + arr[i][j];
       }
       else if(arr[i][j]>0){
        sum2 = sum2 + arr[i][j];
       }
    }
   }
   if(sum1+sum2 == 0){
    cout<< "YES"<<endl;
   }
   else{
    cout<< "NO"<<endl;
   }
   /*   int x,y,z;
   int sum1 = 0;
   int sum2 = 0;
   int sum3 = 0;
   for(int i = 0;i<n;i++){
    cin>>x>>y>>z;

    sum1 = sum1+x;
    sum2 = sum2+y;
    sum3 = sum3+z;
   }

   if(sum1 == 0&& sum2 == 0&& sum3 == 0){
    cout<< "YES"<<endl;
   }
   else{
    cout<< "NO"<<endl;
   }*/


return 0;
}
