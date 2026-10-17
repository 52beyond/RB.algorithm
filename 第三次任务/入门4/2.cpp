#include <iostream>
using namespace std;
int main(){
    int i,n=0;
    int a[10005];
    for(i=0; ;i++)
    {
        cin>>a[i];
        if(a[i]==0){
            break;
        }
        n++;
    }
    int m=0,t;
    i--;
    while(m<i){
        t=a[i];
        a[i]=a[m];
        a[m]=t;
        m++;
        i--;
    }
    int h;
    for(h=0;h<n;h++)
    {
        cout<<a[h]<<" ";
    }
    return 0;
}