#include<iostream>
using namespace std;

int main(){
          
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
      for (int outloop = 0;outloop <n-1;outloop++){
        for(int i = 0 ;i<  n - outloop-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]  =  arr[i+1];
                arr[i+1]= temp;
            }
        }
    }
           for(int i=0;i<n;i++){
           cout << arr[i] << " ";
        }
        cout<< endl;
        



    return 0;

}