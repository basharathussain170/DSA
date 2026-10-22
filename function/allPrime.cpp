#include<iostream>
using namespace std;

int isPrime(int n){
    int prime=true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            prime=false;
        }
    }
    if(prime){
        return n;
    }else{
        return -1;
    }
}

int allPrime(int n){
    for(int i=2;i<=n;i++){
        int x=isPrime(i);
        if(x!=-1){
            cout<<x<<" ";
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    allPrime(n);
    // isPrime(n);

    return 0;
}

