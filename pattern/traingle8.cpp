#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter the number\n";
   cin>>n;
   cout<<endl;
   for(int i=0;i<n;i++){
    for(int j=i+1;j>=1;j--){
        cout<<j<<" ";
    }
    cout<<endl;
   }
   return 0;
}
