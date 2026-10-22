#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(char j='A';j<=(int('A')+n);j++){
            cout<<j<<" ";
        }
        // for(int j=65;j<=(n+65);j++){
        //     cout<<(char)j<<" ";
        // }
        cout<<endl;
    }
    return 0;
}