#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,k,i;
    cin>>n>>k;
    int m1=0,m2=0;
    double average1,average2;
    int sum1=0,sum2=0;
    for(i=1;i<=n;i++){
        if(i%k==0)
        {
            sum1+=i;
            m1++;
        }else{
            sum2+=i;
            m2++;
        }
    }
    average1=1.0*sum1/m1;
    average2=1.0*sum2/m2;
    cout<<fixed<<setprecision(1)<<average1<<" "<<average2<<endl;
    return 0;
    
}