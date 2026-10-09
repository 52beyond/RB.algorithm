#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,all;
    cin>>a>>b>>c>>d;
    all=(c-a)*60+d-b;
    int e,f;
    e=all/60;
    f=all%60;
    cout<<e<<" "<<f<<endl;
    return 0;
}