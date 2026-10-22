#include<iostream>
using namespace std;

int main(){
    int n=10;
    // 0,1,1,2   a(0)+b(1)--->a(1),  a=b(1)--->1    b=a(1)+b(1)  a=b(2)    
    int a=0,b=1,c=0;
    cout<<a<<" ";
    for(int i=1;i<n;i++){
        b=c+b;
        c=a;
        a=b;
        cout<<b<<" ";
    }
}