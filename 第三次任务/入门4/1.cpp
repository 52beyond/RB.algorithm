#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x,y,m;
    for(x=0;x<n;x++)
    {
        m=0;
        for(y=0;y<x;y++)
        {
            if(a[x]>a[y]){
                m++;
            }
        }cout<<m<<" ";
    }
    return 0;
    
}