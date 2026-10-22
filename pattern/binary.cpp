#include <iostream>
using namespace std;

int  binaryNum(int num){
    int ans=0, pow=1;
    while(num>0){
        int rem=num%2;
        num/=2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the n";
    cin >> n;
    int final=binaryNum(n);
    cout<<"Binary number is "<<final;
    return 0;
}

