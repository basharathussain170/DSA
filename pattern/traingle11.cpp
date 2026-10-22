#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter the number\n";
   cin>>n;
   cout<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<" "<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<j+1<<" ";
        // cout<<" "<<" ";
    }
    for(int j=i;j>=1;j--){
        cout<<j<<" ";
        
    }
    cout<<endl;

   }
   return 0;
}
