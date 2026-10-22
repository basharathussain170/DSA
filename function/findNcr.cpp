#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int findNcr(int n, int r){
    int N=factorial(n);
    int a=factorial(r);

    int b=factorial(n-r);
    int R=a*b;
    int final= N/R;
    return final;


}

int main(){
    int n,r;
    cout<<"enter the n \n";
    cin>>n;
    cout<<"enter the r \n";
    cin>>r;
    // int factor=factorial(5);
    // cout<<factor;
    int ncr=findNcr(n,r);
    cout<<"ncr of "<<n<<" "<<r<<endl;
    cout<<ncr;
    
    return 0;
}