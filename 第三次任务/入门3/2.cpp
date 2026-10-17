#include <iostream>
#include <cstdlib>
using namespace std;
int min(int x,int y){
    if(x<y)
    {
        return x;
    }else {
        return y;
    }
}
int main()
{
    int i;
    int x;
    cin>>i;
    int a[i];
    for(x=0;x<i;x++)
    {
        cin>>a[x];
    }
    int m;
    int res =a[0];
    for(m=1;m<i-1;m++){
        res=min(res,a[m]);
    }
    cout<<res<<endl;
    return 0;
}