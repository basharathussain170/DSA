#include<iostream>
using namespace std;

int isPrime(int n){
    int prime=true;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            prime=false;
        }
    }
    if(prime){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
}

int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    isPrime(n);
    return 0;
}