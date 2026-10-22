#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter the number\n";
   cin>>n;
   cout<<endl;
   for(int i=0;i<n;i++){
    for(int j=1;j<=i;j++){
        // cout<<"*"<<" ";
        cout<<" "<<" ";
    }
    // for(int j=n-i;j>=1;j--){
    //     cout<<i+1<<" ";
    // }
    for(int j=n;j>i;j--){
        cout<<i+1<<" ";
    }
    cout<<endl;

   }
   return 0;
}
