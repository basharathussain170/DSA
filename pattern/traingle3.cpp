#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter the number\n";
   cin>>n;
   for(int i=0;i<n;i++){
    int num=i+1;
    for(int j=0;j<=i;j++){
        cout<<num<<" ";
    }
    cout<<endl;
   }
   return 0;
}
