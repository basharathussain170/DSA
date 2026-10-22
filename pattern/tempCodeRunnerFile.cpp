#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter the number\n";
   cin>>n;
   cout<<endl;
//    top
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*"<<" ";
    }
    for(int j=n-i-1;j>=1;j--){
        cout<<" "<<" ";
    }
    for(int j=n-i-1;j>=1;j--){
        cout<<" "<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
   }
//    cout<<endl;

// bottom
   for(int i=0;i<n;i++){
    for(int j=n-i;j>0;j--){
        cout<<"*"<<" ";
    }
    for(int j=i;j>0;j--){
        cout<<" "<<" ";
    }
    for(int j=i;j>0;j--){
        cout<<" "<<" ";
    }
    for(int j=n-i;j>0;j--){
        cout<<"*"<<" ";
    }
    cout<<endl;
   }
   return 0;
}

// *                                     * 
// * *                                 * * 
// * * *                             * * * 
// * * * *                         * * * * 
// * * * * *                     * * * * * 
// * * * * * *                 * * * * * * 
// * * * * * * *             * * * * * * * 
// * * * * * * * *         * * * * * * * * 
// * * * * * * * * *     * * * * * * * * * 
// * * * * * * * * * * * * * * * * * * * * 
// * * * * * * * * * * * * * * * * * * * * 
// * * * * * * * * *     * * * * * * * * * 
// * * * * * * * *         * * * * * * * * 
// * * * * * * *             * * * * * * * 
// * * * * * *                 * * * * * * 
// * * * * *                     * * * * * 
// * * * *                         * * * * 
// * * *                             * * * 
// * *                                 * * 
// *                                     * 