#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,k,j;
    int a[30][30];
    for(k=0;k<n;k++)
    {
        for(j=0;j<n;j++)
        {
            a[k][j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        a[i][i]=1;
        a[i][0]=1;
    }
    for(i = 2; i < n; i++)
     {
         for(j = 1; j < i; j++)
         {
             a[i][j] = a[i-1][j-1] + a[i-1][j];
         }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}