#include <iostream>
using namespace std;
int main(){
    int a,b=0,t;
    cin>>a;
    while(a!=0)
    {
        t=a%10;
        a=a/10;
        b=b*10+t;
    }
    cout<<b<<endl;
    return 0;
}