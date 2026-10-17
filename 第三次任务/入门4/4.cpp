#include <iostream>
using namespace std;
int main(){
    int l,m;
    int i;
    cin>>l>>m;
    i=l+1;
    int a[i];
    int t=0;
    int k;
    for(k=0;k<i;k++){
        a[k]=0;
    }
    int u,v;
    while(t<=m)
    {
        cin>>u>>v;
        for( ;u<=v;u++)
        {
            a[u]=1;
        }
        t++;
    }
    int h;
    int g=0;
    for(h=0;h<i;h++)
    {
        if(a[h]==0)
        {
            g++;
        }
    }
    cout<<g<<endl;
}