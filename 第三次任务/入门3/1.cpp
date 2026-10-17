#include <iostream>
using namespace std;
int main(){
    int x,y,sum=0;
    cin>>x;
    for(y=1;y<=x;y++)
    {
        sum+=y;
    }
    cout<<sum<<endl;
    return 0;
}