#include <iostream>
using namespace std;
int main(){
    int n,i=0;
    int a[10005];
    cin >> n;
    a[i] = n;   
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        i++;
        a[i] = n;  
    }
    for(int j = i; j >= 0; j--)
    {
        cout << a[j] << " ";
    }
    return 0;
}