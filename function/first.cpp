#include<iostream>
using namespace std;

int sumOfN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum of  1 to "<<n<<endl;
    cout<<sum;
    return 0;
}


void factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    // cout<<"factorial of "<<n<<endl;
    cout<<fact;
}


void sumOfDigit(int n){
    // n=1+4+5;
    //     int d=n%10; 145%10-->5, 14%10--->4, 1%10--->1
    //     sum+=d;   0+5+4+1;
    //     n=n/10;   145/10--->14, 14/10--->1, 1/10--->0;

    int copy=n;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum+=digit;
        n=n/10;

    }
    cout<<"sum of "<<sum<<endl;
    return;
}


int main(){
    int n;
    cout<<"enter the n \n";
    cin>>n;
    // sumOfN(n);
    // factorial(n);
    // sumOfDigit(n);
    return 0;
}

