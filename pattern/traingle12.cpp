#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter the number\n";
   cin>>n;
   cout<<endl;
   for(int i=0;i<n;i++){
    for(int j=n-i-1;j>0;j--){
        cout<<" "<<" ";
    }
    for(int j=0;j<1;j++){
        cout<<"*"<<" ";
    }
    if(i!=0){
        for(int j=0;j<i*2-1;j++){
        cout<<" "<<" ";
    }
    for(int j=0;j<1;j++){
        cout<<"*"<<" ";
    }
    }
    cout<<endl;
   }
   for(int i=0;i<n-1;i++){
    for(int j=0;j<i+1;j++){
        cout<<" "<<" ";
    }
    for(int j=0;j<1;j++){
        cout<<"*"<<" ";
    }
    if(i!=n-2){
        for(int j=2*(n-2-i)-1;j>0;j--){
        cout<<" "<<" ";
    }
    for(int j=0;j<1;j++){
        cout<<"*"<<" ";
    }
    }
    cout<<endl;
   }
   return 0;
}
